
@interface WFSiriOpenURLRequest : WFSiriActionRequest {
    NSURL * _URL;
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 andBundleIdentifier:(id)arg2;

@end
