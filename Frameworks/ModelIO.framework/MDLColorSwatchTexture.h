
@interface MDLColorSwatchTexture : MDLTexture {
    struct CGColor { } * _color1;
    struct CGColor { } * _color2;
    float  _colorTemperature1;
    float  _colorTemperature2;
    int  _type;
}

- (id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2;
- (id)initWithColorGradientFrom:(void *)arg1 toColor:(void *)arg2 name:(void *)arg3 textureDimensions:(void *)arg4; // needs 4 arg types, found 3: struct CGColor { }*, struct CGColor { }*, id
- (id)initWithColorTemperatureGradientFrom:(void *)arg1 toColorTemperature:(void *)arg2 name:(void *)arg3 textureDimensions:(void *)arg4; // needs 4 arg types, found 3: float, float, id

@end
