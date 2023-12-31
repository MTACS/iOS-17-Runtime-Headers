
@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recipientsTo;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;

+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipientsTo;
- (void)setRecipientsTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
