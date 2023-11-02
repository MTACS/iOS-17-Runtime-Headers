
@interface ASCOfferContext : NSObject <NSCopying, NSSecureCoding> {
    long long  _flags;
}

@property (nonatomic, readonly) long long flags;
@property (nonatomic, readonly) bool supportsDSIDLessInstall;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlags:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)supportsDSIDLessInstall;

@end
