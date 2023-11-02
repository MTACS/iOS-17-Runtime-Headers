
@interface HMDCameraClipUploader : HMFObject <HMFLogging> {
    NSUUID * _clipUUID;
    <HMDCameraClipUploaderDelegate> * _delegate;
    NAFuture * _didCreateClipFuture;
    HMCameraClipEncryptionManager * _encryptionManager;
    <HMDCameraClipUploaderFactory> * _factory;
    HMBLocalZone * _localZone;
    NSString * _logIdentifier;
    NSMutableArray * _operations;
    long long  _quality;
    NSDate * _startDate;
    double  _targetFragmentDuration;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *clipUUID;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraClipUploaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NAFuture *didCreateClipFuture;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) <HMDCameraClipUploaderFactory> *factory;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSMutableArray *operations;
@property (readonly) long long quality;
@property (readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly) double targetFragmentDuration;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_addOperation:(id)arg1 finalizeClipOnError:(bool)arg2;
- (id)_createClip;
- (id)_createClipWithSignificantEvent:(id)arg1 homePresenceByPairingIdentity:(id)arg2;
- (void)_handleFatalOperationFailure;
- (bool)_isCancelledError:(id)arg1;
- (void)_operationCompleted:(id)arg1 finalizeOnError:(bool)arg2 future:(id)arg3;
- (void)_startNextOperation;
- (id)addNotificationForSignificantEvent:(id)arg1 homePresenceByPairingIdentity:(id)arg2;
- (id)addVideoInitData:(id)arg1;
- (id)addVideoSegmentData:(id)arg1 duration:(double)arg2 timeOffsetWithinClip:(double)arg3 clipFinalizedBecauseMaxDurationExceeded:(bool)arg4;
- (id)attributeDescriptions;
- (id)clipUUID;
- (id)createClip;
- (id)delegate;
- (id)didCreateClipFuture;
- (id)encryptionManager;
- (id)factory;
- (id)finish;
- (bool)hasAddedCreateClipOperation;
- (id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(id)arg5 workQueue:(id)arg6 logIdentifier:(id)arg7;
- (id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(id)arg5 workQueue:(id)arg6 logIdentifier:(id)arg7 encryptionManager:(id)arg8 factory:(id)arg9;
- (id)localZone;
- (id)logIdentifier;
- (id)operations;
- (long long)quality;
- (void)setDelegate:(id)arg1;
- (void)setDidCreateClipFuture:(id)arg1;
- (id)startDate;
- (double)targetFragmentDuration;
- (id)workQueue;

@end
