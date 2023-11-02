
@interface SAIntentGroupSiriKitParameterMetadata : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *confirmationStates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *parameterName;
@property (nonatomic) bool shouldResolve;
@property (readonly) Class superclass;

+ (id)siriKitParameterMetadata;
+ (id)siriKitParameterMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)confirmationStates;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parameterName;
- (void)setConfirmationStates:(id)arg1;
- (void)setParameterName:(id)arg1;
- (void)setShouldResolve:(bool)arg1;
- (bool)shouldResolve;

@end
