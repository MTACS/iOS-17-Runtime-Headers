
@interface _UIActivityDiscoveryContext : NSObject <NSSecureCoding> {
    NSArray * _activityItemValueExtensionMatchingDictionaries;
}

@property (nonatomic, retain) NSArray *activityItemValueExtensionMatchingDictionaries;

+ (id)contextFromExtensionItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityItemValueExtensionMatchingDictionaries;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newExtensionItem;
- (void)setActivityItemValueExtensionMatchingDictionaries:(id)arg1;

@end
