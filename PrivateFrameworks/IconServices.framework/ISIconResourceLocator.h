
@interface ISIconResourceLocator : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSDictionary * _iconsDictionary;
    NSString * _preferedResourceName;
    NSURL * _resourceDirectoryURL;
}

@property (readonly) bool allowLocalizedIcon;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSDictionary *iconsDictionary;
@property (copy) NSString *preferedResourceName;
@property (retain) NSURL *resourceDirectoryURL;

+ (id)genericIconrResourceLocator;
+ (id)resourceLocatorWithLSIconResourceLocator:(id)arg1;
+ (id)resourceLocatorWithType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowLocalizedIcon;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconsDictionary;
- (id)initWithCoder:(id)arg1;
- (id)preferedResourceName;
- (id)resourceDirectoryURL;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIconsDictionary:(id)arg1;
- (void)setPreferedResourceName:(id)arg1;
- (void)setResourceDirectoryURL:(id)arg1;

@end
