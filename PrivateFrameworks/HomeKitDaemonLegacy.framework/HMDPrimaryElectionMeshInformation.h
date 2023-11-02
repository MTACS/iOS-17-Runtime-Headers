
@interface HMDPrimaryElectionMeshInformation : NSObject {
    HMDResidentDevice * _leader;
    HMDResidentDevice * _primary;
    unsigned long long  _reachableIPAccessories;
    unsigned long long  _residentsInMesh;
    HMDResidentDevice * _responder;
}

@property (nonatomic, readonly) HMDResidentDevice *leader;
@property (nonatomic, readonly) HMDResidentDevice *primary;
@property (nonatomic, readonly) unsigned long long reachableIPAccessories;
@property (nonatomic, readonly) unsigned long long residentsInMesh;
@property (nonatomic, readonly) HMDResidentDevice *responder;

+ (id)meshInformationFromMessagePayload:(id)arg1 home:(id)arg2;
+ (id)meshInformationWithMeshController:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResponder:(id)arg1 leader:(id)arg2 primary:(id)arg3 reachableIPAccessories:(unsigned long long)arg4 residentsInMesh:(unsigned long long)arg5;
- (id)leader;
- (id)primary;
- (unsigned long long)reachableIPAccessories;
- (id)redactedDescription;
- (unsigned long long)residentsInMesh;
- (id)responder;
- (id)toMessagePayload;

@end
