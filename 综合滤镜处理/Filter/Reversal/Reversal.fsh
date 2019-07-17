precision highp float;
uniform sampler2D Texture;
varying vec2 TextureCoordsVarying;

void main (void) {
    
    vec4 color = texture2D(Texture, vec2(1.0 - TextureCoordsVarying.x, 1.0 - TextureCoordsVarying.y));
    
    gl_FragColor = color;
}
