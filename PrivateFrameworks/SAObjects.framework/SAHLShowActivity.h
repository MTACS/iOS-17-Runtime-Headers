
@interface SAHLShowActivity : SADomainCommand

@property (nonatomic, copy) NSString *activityDataType;
@property (nonatomic, copy) NSString *activityView;

+ (id)showActivity;
+ (id)showActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)activityDataType;
- (id)activityView;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setActivityDataType:(id)arg1;
- (void)setActivityView:(id)arg1;

@end
