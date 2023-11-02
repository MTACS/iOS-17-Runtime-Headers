
@interface PCFeatureFlags : NSObject {
    NSDictionary * _features;
}

+ (bool)checkFeature:(id)arg1;
+ (void)overwriteFeatureFlags:(id)arg1;
+ (void)setAllFeatureFlags:(id)arg1;
+ (id)sharedInstance;

- (bool)checkFeature:(id)arg1;
- (void)dealloc;
- (void)overwriteFeatureFlags:(id)arg1;
- (void)setAllFeatureFlags:(id)arg1;

@end
