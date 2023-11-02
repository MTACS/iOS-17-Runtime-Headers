
@interface MTSubscriptionController : NSObject {
    void requestController;
}

+ (long long)alreadySubscribedErrorCode;
+ (id)sharedInstance;
+ (id)subscriptionControllerErrorDomain;

- (void).cxx_destruct;
- (id)init;
- (void)podcastExistsInStoreWithFeedUrl:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeToShowWithPodcastStoreId:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;

@end
