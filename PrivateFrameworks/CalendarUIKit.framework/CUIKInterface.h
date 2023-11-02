
@interface CUIKInterface : NSObject {
    long long  _overrideLayoutDirection;
    NSString * _overridePreferredContentSizeCategory;
}

@property long long overrideLayoutDirection;
@property (retain) NSString *overridePreferredContentSizeCategory;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (bool)interfaceIsLeftToRight;
- (bool)isCurrentProcessAnApplicationExtension;
- (long long)layoutDirectionOrOverride;
- (long long)overrideLayoutDirection;
- (id)overridePreferredContentSizeCategory;
- (id)preferredContentSizeCategoryOrOverride;
- (void)setLayoutDirectionOverride:(long long)arg1;
- (void)setOverrideLayoutDirection:(long long)arg1;
- (void)setOverridePreferredContentSizeCategory:(id)arg1;
- (void)setPreferredContentSizeCategoryOverride:(id)arg1;
- (bool)usesLargeTextLayout;

@end
