
@interface CTCAConnectionClosedState : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _closedAt;
    long long  _reason;
    unsigned long long  _wasActiveServices;
}

@property (nonatomic, retain) NSDate *closedAt;
@property (nonatomic) long long reason;
@property (nonatomic) unsigned long long wasActiveServices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)closedAt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)reason;
- (void)setClosedAt:(id)arg1;
- (void)setReason:(long long)arg1;
- (void)setWasActiveServices:(unsigned long long)arg1;
- (unsigned long long)wasActiveServices;

@end
