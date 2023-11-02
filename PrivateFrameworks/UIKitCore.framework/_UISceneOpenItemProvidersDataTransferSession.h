
@interface _UISceneOpenItemProvidersDataTransferSession : NSObject <_UIDataTransferMonitorDelegate> {
    <_DUIDragContinuation> * _continuation;
    <_UISceneOpenItemProvidersDataTransferSessionDelegate> * _delegate;
    PBItemCollection * _itemCollection;
    NSArray * _itemProviders;
    _UIDataTransferMonitor * _monitor;
}

@property (nonatomic, retain) <_DUIDragContinuation> *continuation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UISceneOpenItemProvidersDataTransferSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PBItemCollection *itemCollection;
@property (nonatomic, retain) NSArray *itemProviders;
@property (nonatomic, retain) _UIDataTransferMonitor *monitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)continuation;
- (void)dataTransferMonitorBeganTransfers:(id)arg1;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;
- (id)delegate;
- (void)didFinishSendingRequests;
- (id)initWithItemProviders:(id)arg1 itemCollection:(id)arg2 continuation:(id)arg3;
- (id)itemCollection;
- (id)itemProviders;
- (id)monitor;
- (void)setContinuation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemCollection:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
