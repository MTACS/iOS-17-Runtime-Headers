
@interface WFOpenURLContextualAction : WFContextualAction {
    NSString * _bundleIdentifier;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 actionTitle:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)uniqueIdentifier;
- (id)url;

@end
