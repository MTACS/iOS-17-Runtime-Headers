
@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource> {
    CUICatalog * _catalog;
    bool  _disableSubtype;
    IFImageBag * _imageBag;
    NSString * _imageName;
    long long  _layoutDirection;
    unsigned long long  _platform;
    NSString * _symbolName;
}

@property (readonly) CUICatalog *catalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool disableSubtype;
@property (readonly) unsigned long long hash;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSString *imageName;
@property long long layoutDirection;
@property (readonly) unsigned long long platform;
@property (getter=isPrecomposed, readonly) bool precomposed;
@property (readonly) Class superclass;
@property (readonly) NSString *symbolName;

+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id*)arg3;
+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 platform:(unsigned long long)arg3 error:(id*)arg4;
+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 platform:(unsigned long long)arg4 error:(id*)arg5;
+ (id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id*)arg3;
+ (id)coreGlyphsCatalog;
+ (id)imageForStaticAssetWithKey:(id)arg1 withDescriptor:(id)arg2;

- (void).cxx_destruct;
- (long long)_layoutDirectionFromDevice;
- (id)catalog;
- (bool)disableSubtype;
- (id)imageBag;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)imageName;
- (id)imageWithName:(id)arg1 scale:(double)arg2;
- (id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 platform:(unsigned long long)arg4;
- (bool)isPrecomposed;
- (long long)layoutDirection;
- (unsigned long long)platform;
- (void)setDisableSubtype:(bool)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4;
- (id)symbolImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)symbolName;

@end
