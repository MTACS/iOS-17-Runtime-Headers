
@protocol HMDAudioAnalysisEventSubscriberContext <NSObject, HMMLogEventSubmitting>

@required

- (HMDAppleMediaAccessory *)accessory;
- (HMDBulletinBoardNotification *)audioAnalysisEventNotification;
- (HMDBulletinBoard *)bulletinBoard;
- (HMDDevice *)device;
- (HMFMessageDispatcher *)dispatcher;
- (bool)dropInEnabled;
- (<HMEEventForwarder> *)eventForwarder;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;
- (void)forwardEvent:(void *)arg1 topic:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMEEvent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (HMDHome *)home;
- (bool)isCurrentAccessory;
- (NSString *)name;
- (NSString *)roomName;
- (NSUUID *)spiClientIdentifier;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end
