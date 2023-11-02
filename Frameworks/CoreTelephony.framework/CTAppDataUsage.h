
@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    NSString * _displayName;
    CTDataUsed * _used;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CTDataUsed *used;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 withDisplayName:(id)arg2 andUsage:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)usage;
- (id)used;

@end
