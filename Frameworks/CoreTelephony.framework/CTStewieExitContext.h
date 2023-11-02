
@interface CTStewieExitContext : NSObject <NSCopying, NSSecureCoding> {
    long long  _reason;
}

@property (nonatomic) long long reason;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reason;
- (void)setReason:(long long)arg1;

@end
