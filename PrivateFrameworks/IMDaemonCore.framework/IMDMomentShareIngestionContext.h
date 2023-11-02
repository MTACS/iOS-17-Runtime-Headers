
@interface IMDMomentShareIngestionContext : NSObject {
    NSMutableDictionary * _assetUUIDsToFileTransfers;
    PHFetchResult * _assetsFetch;
    IMDChat * _chat;
    long long  _fetchType;
    IMMessageItem * _message;
    PHMomentShare * _momentShare;
    NSURL * _shareURL;
    long long  _state;
}

@property (nonatomic, readonly) NSDictionary *assetUUIDsToFileTransfers;
@property (nonatomic, retain) PHFetchResult *assetsFetch;
@property (nonatomic, readonly) IMDChat *chat;
@property (nonatomic) long long fetchType;
@property (nonatomic, readonly) IMMessageItem *message;
@property (nonatomic, retain) PHMomentShare *momentShare;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)addTransfers:(id)arg1;
- (id)assetUUIDsToFileTransfers;
- (id)assetsFetch;
- (id)chat;
- (void)clearAllTransfers;
- (void)completeTransferForAssetUUID:(id)arg1;
- (long long)fetchType;
- (id)initWithURL:(id)arg1 message:(id)arg2 inChat:(id)arg3;
- (id)message;
- (id)momentShare;
- (void)setAssetsFetch:(id)arg1;
- (void)setFetchType:(long long)arg1;
- (void)setMomentShare:(id)arg1;
- (void)setState:(long long)arg1;
- (id)shareURL;
- (long long)state;

@end
