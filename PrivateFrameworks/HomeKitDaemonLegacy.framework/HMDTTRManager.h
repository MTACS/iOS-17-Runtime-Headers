
@interface HMDTTRManager : NSObject <HMDRadarInitiating, HMFMessageReceiver> {
    <HMDTTRDataStoring> * _dataStore;
    id /* block */  _dateFactory;
    HMDUIDialogPresenter * _dialog;
}

@property (nonatomic, readonly) <HMDTTRDataStoring> *dataStore;
@property (nonatomic, readonly) id /* block */ dateFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDUIDialogPresenter *dialog;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)defaultManager;
+ (id)namespaceUUID;
+ (id)queue;

- (void).cxx_destruct;
- (id)dataStore;
- (id /* block */)dateFactory;
- (id)dialog;
- (void)handlePresentTTRDialog:(id)arg1;
- (void)handleResetLastTTRTime:(id)arg1;
- (id)init;
- (id)initWithDialog:(id)arg1 dataStore:(id)arg2 dateFactory:(id /* block */)arg3;
- (void)initiateRadarWithTitle:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 componentID:(id)arg4;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)requestRadarWithMessage:(id)arg1 radarTitle:(id)arg2;
- (void)requestRadarWithMessage:(id)arg1 radarTitle:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(id)arg5;
- (void)resetLastTTRTime;

@end
