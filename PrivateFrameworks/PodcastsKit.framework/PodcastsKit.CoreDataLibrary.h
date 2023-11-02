
@interface PodcastsKit.CoreDataLibrary : NSObject <PKLibrary> {
    void $__lazy_storage_$_subscriptionController;
}

@property (nonatomic, retain) <PKSubscriptionController> *subscriptionController;

- (void).cxx_destruct;
- (void)fetchMatchesFor:(id)arg1 limit:(long long)arg2 resultsHandler:(id /* block */)arg3;
- (id)init;
- (void)setSubscriptionController:(id)arg1;
- (id)subscriptionController;

@end
