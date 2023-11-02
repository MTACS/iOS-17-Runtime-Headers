
@interface SAIntentGroupDirectInvocation : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *invocationIdentifier;
@property (readonly) Class superclass;

+ (id)directInvocationWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)invocationIdentifier;
- (void)setData:(id)arg1;
- (void)setInvocationIdentifier:(id)arg1;

@end
