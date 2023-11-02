
@interface WKApplicationProxy : NSObject {
    NSURL * _bundleURL;
}

@property (nonatomic, readonly) NSURL *bundleURL;

+ (id)applicationsForContainerProxy:(id)arg1;
+ (id)gizmoAppBundleUrlWithPluginUrl:(id)arg1;
+ (id)watchAppBundleUrlWithContainerUrl:(id)arg1;

- (void).cxx_destruct;
- (id)bundleURL;
- (id)initWithBundleURL:(id)arg1;

@end
