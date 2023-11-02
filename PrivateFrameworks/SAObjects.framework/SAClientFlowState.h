
@interface SAClientFlowState : SAAceClientState

@property (nonatomic, copy) NSDictionary *cachedDomainClassJavascriptChecksumMap;

+ (id)clientFlowState;
+ (id)clientFlowStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)cachedDomainClassJavascriptChecksumMap;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCachedDomainClassJavascriptChecksumMap:(id)arg1;

@end
