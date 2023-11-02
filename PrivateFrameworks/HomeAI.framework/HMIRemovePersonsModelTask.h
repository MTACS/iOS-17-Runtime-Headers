
@interface HMIRemovePersonsModelTask : HMIHomeTask {
    NSUUID * _sourceUUID;
}

@property (readonly) NSUUID *sourceUUID;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3;
- (id)logIdentifier;
- (void)mainInsideAutoreleasePool;
- (id)sourceUUID;

@end
