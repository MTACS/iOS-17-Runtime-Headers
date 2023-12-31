
@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject {
    MPModelFileAsset * _fileAsset;
    MPIdentifierSet * _sourceItemIdentifiers;
}

@property (nonatomic, retain) MPModelFileAsset *fileAsset;
@property (nonatomic, retain) MPIdentifierSet *sourceItemIdentifiers;

+ (id)_operationQueue;

- (void).cxx_destruct;
- (id)fileAsset;
- (id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2;
- (id)mediaLibraryForItemIdentifiers:(id)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setFileAsset:(id)arg1;
- (void)setSourceItemIdentifiers:(id)arg1;
- (id)sourceItemIdentifiers;

@end
