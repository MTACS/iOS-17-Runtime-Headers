
@interface ATXPosterDescriptorCacheGuardedData : NSObject {
    NSDictionary * descriptors;
    NSHashTable * observers;
}

- (void).cxx_destruct;
- (id)init;

@end
