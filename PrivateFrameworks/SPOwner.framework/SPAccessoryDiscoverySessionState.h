
@interface SPAccessoryDiscoverySessionState : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _accessories;
}

@property (nonatomic, retain) NSSet *accessories;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessories:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccessories:(id)arg1;

@end
