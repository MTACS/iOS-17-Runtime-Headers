
@interface MRAVDistantOutputDeviceDescriptionImpl : NSObject <MRAVOutputDeviceDescriptionImpl> {
    _MRAVOutputDeviceDescriptorProtobuf * _descriptor;
}

@property (getter=isClusterLeader, nonatomic, readonly) bool clusterLeader;
@property (nonatomic, readonly) unsigned int clusterType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) unsigned int deviceSubtype;
@property (nonatomic, readonly) unsigned int deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *roomID;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSArray *subComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsEngageOnClusterActivation;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (unsigned int)clusterType;
- (id)descriptor;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)initWithDescriptor:(id)arg1;
- (bool)isClusterLeader;
- (id)modelID;
- (id)name;
- (id)roomID;
- (id)roomName;
- (id)subComponents;
- (bool)supportsEngageOnClusterActivation;
- (id)uid;

@end
