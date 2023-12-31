
@interface SAReminderUserActivityPayload : AceObject <SAReminderPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUserActivity *userActivity;

+ (id)userActivityPayload;
+ (id)userActivityPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUserActivity:(id)arg1;
- (id)userActivity;

@end
