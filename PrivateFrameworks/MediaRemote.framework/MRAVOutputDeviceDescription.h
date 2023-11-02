
@interface MRAVOutputDeviceDescription : NSObject {
    <MRAVOutputDeviceDescriptionImpl> * _impl;
    NSArray * _subComponents;
}

@property (getter=isClusterLeader, nonatomic, readonly) bool clusterLeader;
@property (nonatomic, readonly) unsigned int clusterType;
@property (nonatomic, readonly) NSString *composedTypeDescription;
@property (nonatomic, readonly) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) unsigned int deviceSubtype;
@property (nonatomic, readonly) unsigned int deviceType;
@property (nonatomic, retain) <MRAVOutputDeviceDescriptionImpl> *impl;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *roomID;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, retain) NSArray *subComponents;
@property (nonatomic, readonly) bool supportsEngageOnClusterActivation;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (unsigned int)clusterType;
- (id)composedTypeDescription;
- (bool)containsUID:(id)arg1;
- (id)description;
- (id)descriptor;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (unsigned long long)hash;
- (id)impl;
- (id)initWithAVDescription:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithDeviceType:(unsigned int)arg1 deviceSubtype:(unsigned int)arg2 uid:(id)arg3;
- (id)initWithDeviceType:(unsigned int)arg1 deviceSubtype:(unsigned int)arg2 uid:(id)arg3 name:(id)arg4;
- (id)initWithDeviceType:(unsigned int)arg1 deviceSubtype:(unsigned int)arg2 uid:(id)arg3 name:(id)arg4 modelID:(id)arg5;
- (bool)isClusterLeader;
- (bool)isEqual:(id)arg1;
- (id)modelID;
- (id)name;
- (id)roomID;
- (id)roomName;
- (void)setImpl:(id)arg1;
- (void)setSubComponents:(id)arg1;
- (id)subComponents;
- (bool)supportsEngageOnClusterActivation;
- (id)uid;

@end
