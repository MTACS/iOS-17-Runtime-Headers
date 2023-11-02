
@interface SHCustomCatalog : SHCatalog {
    SHCustomCatalogConfiguration * __configuration;
    SHCustomCatalogContainer * _customCatalogContainer;
}

@property (nonatomic, readonly, copy) SHCustomCatalogConfiguration *_configuration;
@property (nonatomic, readonly) SHCustomCatalogContainer *customCatalogContainer;
@property (nonatomic, readonly) NSData *dataRepresentation;

+ (id)new;

- (void).cxx_destruct;
- (id)_configuration;
- (id)_createMatcher;
- (id)_customCatalogConfiguration;
- (bool)addCustomCatalog:(id)arg1 error:(id*)arg2;
- (bool)addCustomCatalogDataRepresentation:(id)arg1 error:(id*)arg2;
- (bool)addCustomCatalogFromURL:(id)arg1 error:(id*)arg2;
- (bool)addReferenceSignature:(id)arg1 representingMediaItems:(id)arg2 error:(id*)arg3;
- (id)customCatalogContainer;
- (id)dataRepresentation;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 dataRepresentation:(id)arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithDataRepresentation:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
