
@interface HMDAudioAnalysisEventSubscriberContext : NSObject <HMDAudioAnalysisEventSubscriberContext> {
    HMDAppleMediaAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAppleMediaAccessory *accessory;
@property (readonly) HMDBulletinBoardNotification *audioAnalysisEventNotification;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (getter=isCurrentAccessory, readonly) bool currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly) bool dropInEnabled;
@property (readonly) <HMEEventForwarder> *eventForwarder;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *roomName;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (id)audioAnalysisEventNotification;
- (id)bulletinBoard;
- (id)device;
- (id)dispatcher;
- (bool)dropInEnabled;
- (id)eventForwarder;
- (id)eventStoreReadHandle;
- (void)forwardEvent:(id)arg1 topic:(id)arg2 completion:(id /* block */)arg3;
- (id)home;
- (id)initWithAccessory:(id)arg1 queue:(id)arg2;
- (bool)isCurrentAccessory;
- (id)logIdentifier;
- (id)name;
- (id)roomName;
- (id)spiClientIdentifier;
- (void)submitLogEvent:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
