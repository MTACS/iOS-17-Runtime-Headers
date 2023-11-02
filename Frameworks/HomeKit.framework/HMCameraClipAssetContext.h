
@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    NSDictionary * _requiredHTTPHeaders;
    NSURL * _url;
}

@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSDictionary *requiredHTTPHeaders;
@property (readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)requiredHTTPHeaders;
- (id)url;

@end
