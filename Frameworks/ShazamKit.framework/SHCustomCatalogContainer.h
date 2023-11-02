
@interface SHCustomCatalogContainer : NSObject {
    <SHCustomCatalogStorage> * _container;
    SHJSONLCustomCatalogTransformer * _transformer;
}

@property (nonatomic, readonly) <SHCustomCatalogStorage> *container;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) NSArray *referenceSignatures;
@property (nonatomic, readonly) SHJSONLCustomCatalogTransformer *transformer;

+ (id)customCatalogURLFromURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;
- (id)container;
- (id)dataRepresentation;
- (id)init;
- (bool)loadFromData:(id)arg1 error:(id*)arg2;
- (bool)loadFromURL:(id)arg1 error:(id*)arg2;
- (id)mediaItemsForReferenceSignature:(id)arg1;
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;
- (id)referenceSignatures;
- (id)transformer;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
