
@protocol HKCurrentCountryCode

@required

- (NSString *)ISOCode;
- (long long)provenance;
- (NSDate *)timestamp;

@end
