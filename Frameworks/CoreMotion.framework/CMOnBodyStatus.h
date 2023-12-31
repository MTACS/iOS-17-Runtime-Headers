
@interface CMOnBodyStatus : CMLogItem {
    int  fConfidence;
    int  fResult;
}

@property (nonatomic, readonly) long long confidence;
@property (nonatomic, readonly) long long result;

+ (bool)supportsSecureCoding;

- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;
- (long long)result;

@end
