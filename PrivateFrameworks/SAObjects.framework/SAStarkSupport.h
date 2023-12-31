
@interface SAStarkSupport : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedModes;

+ (id)starkSupport;
+ (id)starkSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSupportedModes:(id)arg1;
- (id)supportedModes;

@end
