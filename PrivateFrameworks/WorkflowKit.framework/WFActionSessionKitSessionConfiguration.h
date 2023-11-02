
@interface WFActionSessionKitSessionConfiguration : NSObject {
    NSString * _bundleIdentifier;
    NSDictionary * _toastDurationPerRunSource;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 toastDurationPerRunSource:(id)arg2;
- (double)toastDurationForRunSource:(id)arg1;

@end
