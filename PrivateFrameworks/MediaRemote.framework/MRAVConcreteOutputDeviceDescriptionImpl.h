
@interface MRAVConcreteOutputDeviceDescriptionImpl : NSObject <MRAVOutputDeviceDescriptionImpl> {
    <AVOutputDeviceDescription> * _avDescription;
}

@property (nonatomic, readonly) <AVOutputDeviceDescription> *avDescription;
@property (getter=isClusterLeader, nonatomic, readonly) bool clusterLeader;
@property (nonatomic, readonly) unsigned int clusterType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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
- (id)avDescription;
- (unsigned int)clusterType;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)initWithAVDescription:(id)arg1;
- (bool)isClusterLeader;
- (id)modelID;
- (id)name;
- (id)roomID;
- (id)roomName;
- (id)subComponents;
- (bool)supportsEngageOnClusterActivation;
- (id)uid;

@end
