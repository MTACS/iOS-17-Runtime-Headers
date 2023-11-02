
@interface FBKFeedbackFollowupResponse : FBKManagedFeedbackObject

@property (retain) NSDate *createdAt;
@property (retain) FBKFeedbackFollowup *followup;
@property (nonatomic, retain) NSNumber *primitiveType;
@property (retain) NSString *role;
@property (retain) NSString *text;
@property unsigned long long type;

+ (id)entityName;
+ (unsigned long long)followupResponseTypeFromString:(id)arg1;
+ (long long)sortValueOfFollowupResponseRole:(id)arg1;

- (bool)isValidated;
- (bool)isValidationResponse;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
