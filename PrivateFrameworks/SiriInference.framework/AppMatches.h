
@interface AppMatches : NSObject <NSCopying, NSSecureCoding> {
    void bundleIds;
    void recommendation;
    void signals;
}

@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long recommendation;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIds;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)recommendation;

@end
