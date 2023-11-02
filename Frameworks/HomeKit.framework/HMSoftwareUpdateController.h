
@interface HMSoftwareUpdateController : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMFMessageReceiver, HMObjectMerge> {
    HMAccessory * _accessory;
    HMSoftwareUpdate * _availableUpdate;
    _HMContext * _context;
    <HMSoftwareUpdateControllerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _uniqueIdentifier;
}

@property HMAccessory *accessory;
@property (retain) HMSoftwareUpdate *availableUpdate;
@property (nonatomic, readonly) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (readonly, copy) NSString *debugDescription;
@property <HMSoftwareUpdateControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)namespace;

- (void).cxx_destruct;
- (id)accessory;
- (id)availableUpdate;
- (void)changeUpdateSource:(long long)arg1 path:(id)arg2 documentationPath:(id)arg3 userInitiatedStaging:(bool)arg4 completion:(id /* block */)arg5;
- (void)configureWithContext:(id)arg1 accessory:(id)arg2;
- (id)context;
- (id)delegate;
- (void)fetchAvailableUpdateWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (bool)isControllable;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)removeStagedSoftwareUpdate:(id /* block */)arg1;
- (void)setAccessory:(id)arg1;
- (void)setAvailableUpdate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
