
@interface SAActivityObject : SADomainObject

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *streamType;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SAClientUserActivity *userActivity;
@property (nonatomic, copy) NSString *visibility;

+ (id)activityObject;
+ (id)activityObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endDate;
- (id)groupIdentifier;
- (id)metadata;
- (void)setEndDate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStreamType:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)setVisibility:(id)arg1;
- (id)startDate;
- (id)streamType;
- (id)type;
- (id)userActivity;
- (id)visibility;

@end
