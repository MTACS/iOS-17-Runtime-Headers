
@interface _UIActivityBundleHelper : NSObject {
    LSBundleProxy * _bundleProxy;
}

@property (nonatomic, retain) LSBundleProxy *bundleProxy;

+ (id)activityBundleHelperForExtension:(id)arg1;

- (void).cxx_destruct;
- (id)bundleProxy;
- (id)debugDescription;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;
- (id)init;
- (id)initWithBundleProxy:(id)arg1;
- (void)setBundleProxy:(id)arg1;

@end
