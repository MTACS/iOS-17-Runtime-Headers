
@protocol PGPersonResult <NSObject>

@required

+ (unsigned long long)type;

- (NSDate *)birthdayDate;
- (long long)compareToPerson:(id <PGPersonResult>)arg1;
- (NSString *)contactIdentifier;
- (NSString *)fullName;
- (bool)isInferredChild;
- (bool)isVerified;
- (NSString *)keywordDescription;
- (NSString *)localIdentifier;
- (NSString *)suggestedContactIdentifier;

@end
