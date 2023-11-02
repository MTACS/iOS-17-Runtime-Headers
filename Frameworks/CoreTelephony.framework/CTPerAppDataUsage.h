
@interface CTPerAppDataUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSArray * _used;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSArray *used;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 withPeriods:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)used;

@end
