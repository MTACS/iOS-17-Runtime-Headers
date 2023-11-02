
@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding> {
    CTDataUsage * _native;
    CTDataUsage * _proxied;
}

@property (nonatomic, readonly) CTDataUsage *native;
@property (nonatomic, readonly) CTDataUsage *proxied;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addNativeUsage:(id)arg1;
- (void)addProxiedUsage:(id)arg1;
- (void)addUsage:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsage:(id)arg1 proxied:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)native;
- (id)proxied;

@end
