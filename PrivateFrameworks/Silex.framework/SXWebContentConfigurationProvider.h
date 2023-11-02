
@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider> {
    id /* block */  _changeBlock;
    NSLocale * _locale;
    <SWLocation> * _location;
    <SXPresentationAttributesProvider> * _presentationAttributesProvider;
    <SXStoreFrontProvider> * _storeFrontProvider;
}

@property (nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) <SWLocation> *location;
@property (nonatomic, readonly) <SXPresentationAttributesProvider> *presentationAttributesProvider;
@property (nonatomic, readonly) <SXStoreFrontProvider> *storeFrontProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)configurationForSize:(struct CGSize { double x1; double x2; })arg1 dataSources:(id)arg2 sourceURL:(id)arg3;
- (id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 location:(id)arg4;
- (void)invokeChangeListener;
- (id)locale;
- (id)location;
- (void)onChange:(id /* block */)arg1;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (id)presentationAttributesProvider;
- (void)setChangeBlock:(id /* block */)arg1;
- (id)storeFrontProvider;

@end
