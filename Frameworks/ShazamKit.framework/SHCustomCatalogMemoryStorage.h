
@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage> {
    NSMutableDictionary * _mediaItems;
    NSArray * _referenceSignatures;
    NSMutableDictionary * _signatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *mediaItems;
@property (nonatomic, readonly) NSArray *referenceSignatures;
@property (nonatomic, retain) NSMutableDictionary *signatures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;
- (id)init;
- (id)jsonObjectRepresentationWithError:(id*)arg1;
- (id)mediaItems;
- (id)mediaItemsForReferenceSignature:(id)arg1;
- (void)producedMediaItem:(id)arg1 forID:(id)arg2;
- (void)producedSignature:(id)arg1 forID:(id)arg2;
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;
- (id)referenceSignatures;
- (void)setMediaItems:(id)arg1;
- (void)setSignatures:(id)arg1;
- (id)signatures;

@end
