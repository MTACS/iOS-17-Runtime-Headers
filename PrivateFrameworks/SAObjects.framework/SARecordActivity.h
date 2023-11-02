
@interface SARecordActivity : SABaseClientBoundCommand

@property (nonatomic, retain) SAActivityObject *activity;

+ (id)recordActivity;
+ (id)recordActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)activity;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setActivity:(id)arg1;

@end
