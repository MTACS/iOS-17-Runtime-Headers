
@interface SearchUIBiomeSubscriberRegistry : NSObject {
    NSCache * _subscribers;
}

@property (nonatomic, retain) NSCache *subscribers;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)cacheSubscriber:(id)arg1 forKey:(id)arg2;
- (void)flush;
- (id)init;
- (id)requestSubscriberForIdentifier:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (id)subscribers;
- (id)validCachedSubscriber:(id)arg1 ofClass:(Class)arg2;

@end
