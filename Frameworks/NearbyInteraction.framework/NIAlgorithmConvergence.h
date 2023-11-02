
@interface NIAlgorithmConvergence : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _reasons;
    long long  _status;
}

@property (nonatomic, copy) NSArray *reasons;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 andReasons:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reasons;
- (id)reasonsPrivate;
- (void)setReasons:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
