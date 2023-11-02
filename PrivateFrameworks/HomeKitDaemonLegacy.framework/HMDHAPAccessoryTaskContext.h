
@interface HMDHAPAccessoryTaskContext : NSObject {
    HMFActivity * _activity;
    HMDHome * _home;
    NSNumber * _identifier;
    long long  _operationType;
    HMFMessage * _requestMessage;
    unsigned long long  _sourceType;
}

@property (nonatomic, retain) HMFActivity *activity;
@property (readonly) HMDHome *home;
@property (readonly) NSNumber *identifier;
@property (readonly) long long operationType;
@property (readonly) HMFMessage *requestMessage;
@property (readonly) unsigned long long sourceType;
@property (readonly) bool supportsMultiPartResponse;
@property (readonly) HMDUser *user;

- (void).cxx_destruct;
- (id)activity;
- (id)clientBundleIdentifier;
- (void)dispatchMessage:(id)arg1 delegateDevice:(id)arg2;
- (id)home;
- (id)homeMessageDestination;
- (id)homeUniqueIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 operationType:(long long)arg2 home:(id)arg3 sourceType:(unsigned long long)arg4 requestMessage:(id)arg5 name:(id)arg6;
- (bool)isComplete;
- (bool)isRemoteAccessDeviceReachable;
- (bool)isShortActionOperation;
- (id)operationName;
- (long long)operationType;
- (long long)qualityOfService;
- (id)requestMessage;
- (id)requestMessageIdentifier;
- (id)requestMessageName;
- (id)residentMapForAccessories:(id)arg1;
- (void)setActivity:(id)arg1;
- (unsigned long long)sourceType;
- (bool)supportsMultiPartResponse;
- (id)user;
- (id)workQueue;

@end
