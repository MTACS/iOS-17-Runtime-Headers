
@interface HMDCameraRemoteStreamTracker : HMFObject <HMFLogging> {
    NSMutableSet * _currentStreamIdentifiers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSMutableSet *currentStreamIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedTracker;

- (void).cxx_destruct;
- (id)currentStreamIdentifiers;
- (id)init;
- (bool)startTrackingStreamSession:(id)arg1;
- (void)stopTrackingStreamWithSessionID:(id)arg1;
- (id)workQueue;

@end
