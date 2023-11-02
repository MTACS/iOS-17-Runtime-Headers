
@interface NTKThirdPartyComplication : NTKComplication

@property (nonatomic, readonly) NSString *clkClientIdentifier;
@property (nonatomic, readonly) CLKComplicationDescriptor *clkComplicationDescriptor;

+ (bool)supportsSecureCoding;

- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)clkClientIdentifier;
- (id)clkComplicationDescriptor;
- (void)encodeWithCoder:(id)arg1;

@end
