
@interface MIBundleContainerToken : MIContainerToken {
    NSURL * _bundleURL;
    bool  _hasIdentifiedBundle;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) bool hasIdentifiedBundle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleURL;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIdentifiedBundle;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;

@end
