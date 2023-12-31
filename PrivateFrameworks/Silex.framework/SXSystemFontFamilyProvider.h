
@interface SXSystemFontFamilyProvider : NSObject <SXFontFamilyProvider> {
    NSArray * _fonts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *fonts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)fontFamilies;
- (id)fonts;
- (id)fontsForMetadata:(id)arg1;
- (id)init;
- (id)initWithFontMetaData:(id)arg1;

@end
