
@interface ATXPosterConfigurationCacheGuardedData : NSObject {
    NSArray * configurations;
    NSHashTable * observers;
}

- (void).cxx_destruct;
- (id)init;

@end
