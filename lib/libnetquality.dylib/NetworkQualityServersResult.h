
@interface NetworkQualityServersResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _servers;
}

@property (copy) NSArray *servers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)servers;
- (void)setServers:(id)arg1;

@end
