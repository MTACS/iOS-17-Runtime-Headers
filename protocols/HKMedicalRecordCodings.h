
@protocol HKMedicalRecordCodings <NSObject>

@required

+ (NSString *)defaultDisplayString;

- (NSString *)fallbackDisplayString;
- (NSArray *)medicalRecordCodings;

@end
