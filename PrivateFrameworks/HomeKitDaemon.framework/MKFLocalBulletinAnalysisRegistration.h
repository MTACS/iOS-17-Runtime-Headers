
@interface MKFLocalBulletinAnalysisRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long classifierOptions;

+ (id)fetchAudioAnalysisModeRegistrationForAccessoryUUID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchRequest;

@end
