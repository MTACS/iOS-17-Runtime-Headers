
@interface SASLockStateTransport : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _transport;
}

@property (nonatomic, retain) NSNumber *transport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)SASLockState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSASLockState:(unsigned long long)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
