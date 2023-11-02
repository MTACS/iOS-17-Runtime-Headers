
@interface CACOnboardingFeature : NSObject {
    NSString * _helperText;
    NSString * _imageBundleName;
    NSString * _titleText;
}

@property (nonatomic, retain) NSString *helperText;
@property (nonatomic, retain) NSString *imageBundleName;
@property (nonatomic, retain) NSString *titleText;

+ (id)featureWithTitleText:(id)arg1 helperText:(id)arg2;
+ (id)featureWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3;

- (void).cxx_destruct;
- (id)helperText;
- (id)imageBundleName;
- (id)initWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3;
- (void)setHelperText:(id)arg1;
- (void)setImageBundleName:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;

@end
