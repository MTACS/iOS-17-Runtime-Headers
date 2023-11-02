
@interface PPQuickTypeCachedNameLookup : NSObject {
    NSArray * _candidates;
    NSObject<OS_dispatch_semaphore> * _sem;
}

- (void).cxx_destruct;

@end
