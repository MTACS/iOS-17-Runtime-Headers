
@interface HMIPersonsModel : HMFObject <HMFLogging> {
    bool  _externalLibrary;
    NSUUID * _homeUUID;
    NSUUID * _sourceUUID;
    VNPersonsModel * _visionPersonsModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExternalLibrary, readonly) bool externalLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) HMIPersonsModelSummary *summary;
@property (readonly) Class superclass;
@property (readonly) VNPersonsModel *visionPersonsModel;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)homeUUID;
- (id)initWithPersonsModel:(id)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 externalLibrary:(bool)arg4;
- (bool)isExternalLibrary;
- (id)sourceUUID;
- (id)summary;
- (id)visionPersonsModel;

@end
