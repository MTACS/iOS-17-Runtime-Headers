
@protocol HMDPreferredMediaUserEventControllerDataSource

@required

- (NSUUID *)accessoryUUID;
- (<HMEEventForwarder> *)eventForwarder;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;
- (NSUUID *)homeUUID;
- (bool)isCurrentAccessory;
- (void)updatePreferredMediaUser:(NSString *)arg1 selectionType:(unsigned long long)arg2;

@end
