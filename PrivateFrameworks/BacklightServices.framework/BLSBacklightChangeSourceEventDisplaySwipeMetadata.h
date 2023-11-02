
@interface BLSBacklightChangeSourceEventDisplaySwipeMetadata : BLSBacklightChangeSourceEventMetadata {
    long long  _direction;
}

@property (nonatomic, readonly) long long direction;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirection:(long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
