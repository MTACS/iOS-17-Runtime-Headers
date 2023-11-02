
@interface SXSanFranciscoFontFamilyProvider : NSObject <SXFontFamilyProvider> {
    SXSanFranciscoFontFamily * _family;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXSanFranciscoFontFamily *family;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)family;
- (id)fontFamilies;
- (id)init;

@end
