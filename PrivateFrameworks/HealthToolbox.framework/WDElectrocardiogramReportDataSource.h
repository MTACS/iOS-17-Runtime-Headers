
@interface WDElectrocardiogramReportDataSource : NSObject <HRElectrocardiogramReportDataSource> {
    long long  _activeAlgorithmVersion;
    NSDateComponents * _dateOfBirthComponents;
    NSString * _firstName;
    HKHealthStore * _healthStore;
    NSString * _lastName;
    HKElectrocardiogram * _sample;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) long long activeAlgorithmVersion;
@property (nonatomic, retain) NSDateComponents *dateOfBirthComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, readonly) HKElectrocardiogram *sample;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_fetchDemographicInformation;
- (long long)activeAlgorithmVersion;
- (id)dateOfBirthComponents;
- (id)firstName;
- (id)healthStore;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 activeAlgorithmVersion:(long long)arg3;
- (id)lastName;
- (id)sample;
- (void)setDateOfBirthComponents:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (id)tintColor;

@end
