
@interface SXSanFranciscoFontFace : NSObject <SXFontFace> {
    <SXFontAttributes> * _fontAttributes;
    NSDictionary * _fontDescriptorAttributes;
    NSString * _fontName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXFontAttributes> *fontAttributes;
@property (nonatomic, readonly) NSDictionary *fontDescriptorAttributes;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fontAttributes;
- (id)fontDescriptorAttributes;
- (id)fontName;
- (id)initWithFontName:(id)arg1 fontAttributes:(id)arg2 fontDescriptorAttributes:(id)arg3;

@end
