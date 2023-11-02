
@protocol MRAVOutputDeviceDescriptionImpl <NSObject>

@required

- (unsigned int)clusterType;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (bool)isClusterLeader;
- (NSString *)modelID;
- (NSString *)name;
- (NSString *)roomID;
- (NSString *)roomName;
- (NSArray *)subComponents;
- (bool)supportsEngageOnClusterActivation;
- (NSString *)uid;

@end
