
@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding> {
    long long  _activityCategory;
    NSString * _bundlePath;
    UIImage * _fetchedImage;
    NSString * _imageName;
}

@property (nonatomic) long long activityCategory;
@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic, readonly) UIImage *fetchedImage;
@property (nonatomic, copy) NSString *imageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activityCategory;
- (id)bundlePath;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchedImage;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3;
- (void)setActivityCategory:(long long)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setImageName:(id)arg1;

@end
