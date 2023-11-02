
@interface SVDCapability : NSObject <NSSecureCoding, SVDCapabilityMatching>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_swiftBacking;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (bool)matchesCapabilityDescriptions:(id)arg1;

@end
