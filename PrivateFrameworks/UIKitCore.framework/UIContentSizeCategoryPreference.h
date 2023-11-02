
@interface UIContentSizeCategoryPreference : NSObject {
    NSString * _preferredContentSizeCategory;
    NSString * _preferredContentSizeCategoryCarPlay;
}

@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *preferredContentSizeCategoryCarPlay;

+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(id /* block */)arg2;
+ (void)_populateUserDefaultsContentSizeCategory:(out id*)arg1 carPlay:(out id*)arg2;
+ (void)_resetSystemPreferenceOverride;
+ (void)asyncOverrideSystemWithPreference:(id)arg1;
+ (void)asyncResetSystemPreferenceOverride;
+ (void)overrideSystemWithPreference:(id)arg1;
+ (void)overrideSystemWithPreference:(id)arg1 forBlock:(id /* block */)arg2;
+ (void)resetSystemPreferenceOverride;
+ (id)system;

- (void).cxx_destruct;
- (void)checkForChanges;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentSizeCategory:(id)arg1;
- (id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2;
- (id)initWithRawUserDefaults;
- (bool)isEqual:(id)arg1;
- (id)preferredContentSizeCategory;
- (id)preferredContentSizeCategoryCarPlay;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setPreferredContentSizeCategoryCarPlay:(id)arg1;

@end
