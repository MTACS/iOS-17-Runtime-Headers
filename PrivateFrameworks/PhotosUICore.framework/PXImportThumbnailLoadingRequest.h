
@interface PXImportThumbnailLoadingRequest : NSObject {
    PHImportAssetDataRequest * _assetDataRequest;
    id /* block */  _completionBlock;
    PXImportItemViewModel * _importItem;
    long long  _requestID;
    unsigned long long  _requestSize;
}

@property (retain) PHImportAssetDataRequest *assetDataRequest;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) PXImportItemViewModel *importItem;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) unsigned long long requestSize;

- (void).cxx_destruct;
- (id)assetDataRequest;
- (id /* block */)completionBlock;
- (id)importItem;
- (id)initWithImportItem:(id)arg1 requestID:(long long)arg2 requestSize:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (long long)requestID;
- (unsigned long long)requestSize;
- (void)setAssetDataRequest:(id)arg1;

@end
