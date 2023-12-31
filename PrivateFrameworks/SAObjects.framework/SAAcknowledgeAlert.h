
@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (nonatomic, retain) SADomainObject *object;

+ (id)acknowledgeAlert;
+ (id)acknowledgeAlertWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (bool)requiresResponse;
- (void)setObject:(id)arg1;

@end
