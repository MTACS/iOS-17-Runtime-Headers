
@interface SFAirDropBrowser : NSObject {
    <SFAirDropBrowserBatchDelegate> * _batchDelegate;
    struct __SFBrowser { } * _browser;
    <SFAirDropBrowserDelegate> * _delegate;
    <SFAirDropBrowserDiffableDelegate> * _diffableDelegate;
    NSMutableDictionary * _nodeIDToNode;
    NSMutableDictionary * _nodes;
    NSArray * _people;
    NSArray * _photosAssetIDs;
    NSString * _sendingAppBundleID;
    NSString * _sessionID;
    bool  _shouldDeliverEmptyUpdates;
    NSArray * _urlsBeingShared;
}

@property <SFAirDropBrowserBatchDelegate> *batchDelegate;
@property <SFAirDropBrowserDelegate> *delegate;
@property <SFAirDropBrowserDiffableDelegate> *diffableDelegate;
@property (nonatomic, readonly) NSMutableDictionary *nodeIDToNode;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic, copy) NSArray *photosAssetIDs;
@property (nonatomic, copy) NSString *sendingAppBundleID;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, copy) NSArray *urlsBeingShared;

- (void).cxx_destruct;
- (id)batchDelegate;
- (void)dealloc;
- (id)delegate;
- (id)diffableDelegate;
- (void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)handleBrowserCallBack;
- (id)init;
- (id)nodeIDToNode;
- (void)pause;
- (id)people;
- (id)photosAssetIDs;
- (void)resume;
- (id)sendingAppBundleID;
- (id)sessionID;
- (void)setBatchDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDelegate:(id)arg1;
- (void)setPhotosAssetIDs:(id)arg1;
- (void)setSendingAppBundleID:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setUrlsBeingShared:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateDiscoveredPeople;
- (id)urlsBeingShared;

@end
