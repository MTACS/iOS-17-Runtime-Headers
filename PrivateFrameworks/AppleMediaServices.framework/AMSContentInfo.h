
@interface AMSContentInfo : NSObject <NSSecureCoding> {
    NSString * _cacheKey;
    NSDate * _created;
    NSDate * _expires;
    NSString * _path;
    NSString * _version;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSDate *expires;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)created;
- (void)encodeWithCoder:(id)arg1;
- (id)expires;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (void)setCacheKey:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setExpires:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
