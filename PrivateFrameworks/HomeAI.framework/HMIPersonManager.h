
@interface HMIPersonManager : HMFObject {
    NSUUID * _UUID;
    <HMIPersonManagerDataSource> * _dataSource;
    NSUUID * _homeUUID;
    bool  _personDataAvailableViaHomeKit;
    bool  _supportsFaceClassification;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic) <HMIPersonManagerDataSource> *dataSource;
@property (readonly, copy) NSUUID *homeUUID;
@property (getter=isPersonDataAvailableViaHomeKit) bool personDataAvailableViaHomeKit;
@property bool supportsFaceClassification;

- (void).cxx_destruct;
- (id)UUID;
- (id)dataSource;
- (void)handleRemovedFaceCropWithUUID:(id)arg1;
- (void)handleRemovedFaceprintWithUUID:(id)arg1;
- (void)handleRemovedPersonWithUUID:(id)arg1;
- (void)handleUpdatedFaceprint:(id)arg1;
- (void)handleUpdatedPerson:(id)arg1;
- (void)handleUpdatedPersonFaceCrop:(id)arg1;
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1;
- (id)homeUUID;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 homeUUID:(id)arg2;
- (bool)isPersonDataAvailableViaHomeKit;
- (void)setDataSource:(id)arg1;
- (void)setPersonDataAvailableViaHomeKit:(bool)arg1;
- (void)setSupportsFaceClassification:(bool)arg1;
- (bool)supportsFaceClassification;

@end
