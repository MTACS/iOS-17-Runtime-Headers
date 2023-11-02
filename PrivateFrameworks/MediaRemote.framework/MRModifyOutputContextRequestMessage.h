
@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *addingOutputDeviceUIDs;
@property (nonatomic, readonly) NSArray *removingOutputDeviceUIDs;
@property (nonatomic, readonly) NSArray *settingOutputDeviceUIDs;

- (id)addingOutputDeviceUIDs;
- (unsigned int)contextType;
- (id)description;
- (id)initWithAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 clusterAwareAddingOutputDeviceUIDs:(id)arg4 clusterAwareRemovingOutputDeviceUIDs:(id)arg5 clusterAwareSettingOutputDeviceUIDs:(id)arg6;
- (id)removingOutputDeviceUIDs;
- (id)settingOutputDeviceUIDs;
- (unsigned long long)type;

@end
