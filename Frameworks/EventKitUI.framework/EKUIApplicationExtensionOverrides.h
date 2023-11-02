
@interface EKUIApplicationExtensionOverrides : NSObject

+ (id)shared;

- (id)init;
- (long long)layoutDirectionOrOverride;
- (id)preferredContentSizeCategoryOrOverride;
- (void)setLayoutDirectionOverride:(long long)arg1;
- (void)setPreferredContentSizeCategoryOverride:(id)arg1;
- (void)setViewHierarchyOverride:(id)arg1;
- (id)viewHierarchyOrOverride;

@end
