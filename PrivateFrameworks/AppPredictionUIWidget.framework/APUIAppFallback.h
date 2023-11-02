
@interface APUIAppFallback : NSObject {
    NSString * _bundleId;
    ATXProactiveSuggestion * _suggestion;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) ATXProactiveSuggestion *suggestion;

- (void).cxx_destruct;
- (id)bundleId;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1;
- (id)initWithProactiveSuggestion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAPUIAppFallback:(id)arg1;
- (id)suggestion;

@end
