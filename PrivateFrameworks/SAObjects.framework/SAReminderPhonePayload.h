
@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phoneCallType;
@property (nonatomic, copy) NSString *recipient;
@property (readonly) Class superclass;

+ (id)phonePayload;
+ (id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phoneCallType;
- (id)recipient;
- (void)setPhoneCallType:(id)arg1;
- (void)setRecipient:(id)arg1;

@end
