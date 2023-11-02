
@protocol HRElectrocardiogramReportDataSource <NSObject>

@required

- (long long)activeAlgorithmVersion;
- (NSDateComponents *)dateOfBirthComponents;
- (NSString *)firstName;
- (NSString *)lastName;
- (HKElectrocardiogram *)sample;
- (UIColor *)tintColor;

@end
