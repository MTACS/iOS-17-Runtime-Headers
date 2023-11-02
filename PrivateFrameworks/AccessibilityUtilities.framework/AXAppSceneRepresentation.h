
@interface AXAppSceneRepresentation : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _fbSceneIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *fbSceneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fbSceneIdentifier;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 fbSceneIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
