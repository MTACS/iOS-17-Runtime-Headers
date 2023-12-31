
@interface ASDCheckQueueRequestOptions : ASDRequestOptions {
    unsigned long long  _reason;
}

@property (nonatomic) unsigned long long reason;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReason:(unsigned long long)arg1;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;

@end
