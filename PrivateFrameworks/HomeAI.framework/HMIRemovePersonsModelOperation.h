
@interface HMIRemovePersonsModelOperation : HMFOperation {
    bool  _external;
    NSUUID * _homeUUID;
    NSUUID * _sourceUUID;
}

@property (readonly) bool external;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *sourceUUID;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)external;
- (id)homeUUID;
- (id)initWithSourceUUID:(id)arg1 homeUUID:(id)arg2 external:(bool)arg3;
- (id)logIdentifier;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (void)removePersonsModelWithRetryOnError:(bool)arg1;
- (id)sourceUUID;

@end
