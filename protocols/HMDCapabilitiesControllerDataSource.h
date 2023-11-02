
@protocol HMDCapabilitiesControllerDataSource

@required

- (HMAccessoryCapabilities *)createCurrentAccessoryCapabilities;
- (HMResidentCapabilities *)createCurrentResidentCapabilities;
- (NSUUID *)currentAccessoryHomeUUID;
- (NSUUID *)currentAccessoryUUID;
- (<HMEEventForwarder> *)eventForwarder;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;

@end
