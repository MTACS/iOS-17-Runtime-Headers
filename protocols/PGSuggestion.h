
@protocol PGSuggestion <NSObject>

@required

- (unsigned long long)availableFeatures;
- (bool)containsUnverifiedPersons;
- (NSDate *)creationDate;
- (NSSet *)features;
- (NSArray *)keyAssets;
- (unsigned char)notificationQuality;
- (unsigned short)notificationState;
- (id)recipe;
- (unsigned long long)relevanceDurationInDays;
- (NSArray *)representativeAssets;
- (unsigned short)state;
- (NSString *)subtitle;
- (unsigned short)subtype;
- (NSArray *)suggestedPersonLocalIdentifiers;
- (NSString *)title;
- (unsigned short)type;
- (NSDate *)universalEndDate;
- (NSDate *)universalStartDate;
- (long long)version;

@optional

- (bool)isInvalid;
- (NSArray *)reasons;
- (double)score;

@end
