
@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject {
    unsigned char  _creatorDevice;
    HKHealthStore * _healthStore;
    HDProfile * _profile;
}

@property (nonatomic) unsigned char creatorDevice;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)arg1;
- (unsigned char)creatorDevice;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 creatorDevice:(unsigned char)arg2;
- (id)initWithProfile:(id)arg1 creatorDevice:(unsigned char)arg2;
- (bool)markTemplateAvailable:(id)arg1 error:(id*)arg2;
- (id)profile;
- (void)setCreatorDevice:(unsigned char)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setProfile:(id)arg1;

@end
