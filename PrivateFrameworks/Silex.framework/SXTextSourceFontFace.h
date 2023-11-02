
@interface SXTextSourceFontFace : NSObject <SXFontFace> {
    <SXFontAttributes> * _fontAttributes;
    NSString * _fontName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXFontAttributes> *fontAttributes;
@property (nonatomic, readonly) NSDictionary *fontDescriptorAttributes;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)basicFontAttributesForFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1 andAttributes:(id)arg2;

- (void).cxx_destruct;
- (id)fontAttributes;
- (id)fontDescriptorAttributes;
- (id)fontName;

@end
