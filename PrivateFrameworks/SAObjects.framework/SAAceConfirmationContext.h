
@interface SAAceConfirmationContext : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

+ (id)aceConfirmationContext;
+ (id)aceConfirmationContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reason;
- (void)setReason:(id)arg1;

@end
