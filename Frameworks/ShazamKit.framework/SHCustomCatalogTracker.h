
@interface SHCustomCatalogTracker : NSObject {
    SHCustomCatalog * _customCatalog;
    SHSignatureChunker * _querySignatureChunker;
    NSArray * _querySignatureChunks;
}

@property (nonatomic, readonly) SHCustomCatalog *customCatalog;
@property (nonatomic, readonly) SHSignatureChunker *querySignatureChunker;
@property (nonatomic, readonly) NSArray *querySignatureChunks;

- (void).cxx_destruct;
- (id)customCatalog;
- (id)initWithQuerySignature:(id)arg1 customCatalog:(id)arg2;
- (id)querySignatureChunker;
- (id)querySignatureChunks;
- (id)trackQuerySignatureChunk:(id)arg1 usingReferenceTrackID:(unsigned long long)arg2 error:(id*)arg3;

@end
