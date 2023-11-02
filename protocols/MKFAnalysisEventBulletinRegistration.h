
@protocol MKFAnalysisEventBulletinRegistration <MKFBulletinRegistration, MKFAnalysisEventBulletinRegistrationPublicExtensions>

@required

- (<MKFAccessory> *)accessory;
- (NSNumber *)classifierOptions;
- (MKFAnalysisEventBulletinRegistrationDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setAccessory:(id <MKFAccessory>)arg1;
- (void)setClassifierOptions:(NSNumber *)arg1;

@end
