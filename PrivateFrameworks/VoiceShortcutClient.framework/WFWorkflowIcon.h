
@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding> {
    long long  _backgroundColorValue;
    NSData * _customImageData;
    unsigned short  _glyphCharacter;
}

@property (nonatomic, readonly) WFColor *backgroundColor;
@property (nonatomic, readonly) long long backgroundColorValue;
@property (nonatomic, readonly, copy) NSData *customImageData;
@property (nonatomic, readonly) unsigned short glyphCharacter;
@property (nonatomic, readonly) WFIcon *icon;

+ (unsigned short)defaultGlyphCharacter;
+ (unsigned long long)randomPaletteColor;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)backgroundColorValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customImageData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyphCharacter;
- (unsigned long long)hash;
- (id)icon;
- (id)init;
- (id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaletteColor:(unsigned long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
