
@interface SPUnknownDiscoverySessionState : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _unknownAccessories;
}

@property (nonatomic, retain) NSSet *unknownAccessories;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnknownAccessories:(id)arg1;
- (void)setUnknownAccessories:(id)arg1;
- (id)unknownAccessories;

@end
