
@interface HFMediaServiceManager : NSObject {
    NSMutableDictionary * _homeIdentifierToDefaultServiceMapping;
    NSMutableDictionary * _homeIdentifierToMediaServicesMapping;
    NSMutableDictionary * _homeIdentifierToReadRequestInFlightMapping;
    NSMutableDictionary * _homeIdentifierToRefreshNeededMapping;
    NSHashTable * _observers;
}

@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToDefaultServiceMapping;
@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToMediaServicesMapping;
@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToReadRequestInFlightMapping;
@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToRefreshNeededMapping;
@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_defaultMediaServiceForHome:(id)arg1;
- (void)_dispatchMessageToObserversWithBlock:(id /* block */)arg1;
- (id)_fetchDefaultMediaServiceForHome:(id)arg1;
- (bool)_isReadRequestInFlightForHome:(id)arg1;
- (id)_mediaServicesForHome:(id)arg1;
- (void)addMediaServiceManagerObserver:(id)arg1;
- (id)defaultMediaServiceForHome:(id)arg1;
- (id)fetchMediaServicesForHome:(id)arg1;
- (id)homeIdentifierToDefaultServiceMapping;
- (id)homeIdentifierToMediaServicesMapping;
- (id)homeIdentifierToReadRequestInFlightMapping;
- (id)homeIdentifierToRefreshNeededMapping;
- (id)init;
- (bool)isRefreshNeededForHome:(id)arg1;
- (id)mediaServicesForHome:(id)arg1;
- (id)observers;
- (id)removeMediaService:(id)arg1 forHome:(id)arg2;
- (void)removeMediaServiceManagerObserver:(id)arg1;
- (void)setHomeIdentifierToDefaultServiceMapping:(id)arg1;
- (void)setHomeIdentifierToMediaServicesMapping:(id)arg1;
- (void)setHomeIdentifierToReadRequestInFlightMapping:(id)arg1;
- (void)setHomeIdentifierToRefreshNeededMapping:(id)arg1;
- (void)setObservers:(id)arg1;
- (id)updateDefaultMediaService:(id)arg1 forHome:(id)arg2;
- (id)updateProperty:(id)arg1 forHome:(id)arg2 withOptions:(id)arg3;
- (void)warmup;

@end
