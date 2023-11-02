
@interface ATStoreDownloadOperationResult : NSObject {
    NSDictionary * _assetClientParams;
    bool  _cancelAllRemaining;
    NSString * _downloadFilePath;
    bool  _isHLSDownload;
    ICRequestContext * _requestContext;
    NSData * _resumeData;
    ICStoreMediaResponseItem * _storeMediaResponseItem;
}

@property (nonatomic, copy) NSDictionary *assetClientParams;
@property (nonatomic) bool cancelAllRemaining;
@property (nonatomic, copy) NSString *downloadFilePath;
@property (nonatomic) bool isHLSDownload;
@property (nonatomic, copy) ICRequestContext *requestContext;
@property (nonatomic, copy) NSData *resumeData;
@property (nonatomic, copy) ICStoreMediaResponseItem *storeMediaResponseItem;

- (void).cxx_destruct;
- (id)assetClientParams;
- (bool)cancelAllRemaining;
- (id)description;
- (id)downloadFilePath;
- (bool)isHLSDownload;
- (id)requestContext;
- (id)resumeData;
- (void)setAssetClientParams:(id)arg1;
- (void)setCancelAllRemaining:(bool)arg1;
- (void)setDownloadFilePath:(id)arg1;
- (void)setIsHLSDownload:(bool)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResumeData:(id)arg1;
- (void)setStoreMediaResponseItem:(id)arg1;
- (id)storeMediaResponseItem;

@end
