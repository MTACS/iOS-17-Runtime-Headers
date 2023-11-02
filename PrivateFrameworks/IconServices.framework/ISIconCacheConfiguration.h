
@interface ISIconCacheConfiguration : NSObject <NSSecureCoding> {
    NSString * _salt;
    NSString * _sandboxExtension;
    NSURL * _url;
}

@property (retain) NSString *salt;
@property (retain) NSString *sandboxExtension;
@property (retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)salt;
- (id)sandboxExtension;
- (void)setSalt:(id)arg1;
- (void)setSandboxExtension:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
