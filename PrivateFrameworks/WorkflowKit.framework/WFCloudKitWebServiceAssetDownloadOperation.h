
@interface WFCloudKitWebServiceAssetDownloadOperation : WFCloudKitAsyncOperation {
    NSURL * _assetURL;
    <WFCloudKitItem> * _item;
    NSString * _key;
}

@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic) <WFCloudKitItem> *item;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)assetURL;
- (id)initWithAssetURL:(id)arg1 item:(id)arg2 key:(id)arg3;
- (id)item;
- (id)key;
- (void)setAssetURL:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setKey:(id)arg1;
- (void)start;

@end
