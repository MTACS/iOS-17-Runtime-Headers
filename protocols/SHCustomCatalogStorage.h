
@protocol SHCustomCatalogStorage <SHJSONLCustomCatalogTransformerDelegate>

@required

- (void)addSignature:(SHSignature *)arg1 representingMediaItems:(NSArray *)arg2;
- (NSArray *)jsonObjectRepresentationWithError:(id*)arg1;
- (NSArray *)mediaItemsForReferenceSignature:(SHReferenceSignature *)arg1;
- (SHReferenceSignature *)referenceSignatureForTrackID:(unsigned long long)arg1;
- (NSArray *)referenceSignatures;

@end
