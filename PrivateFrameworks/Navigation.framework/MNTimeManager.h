
@interface MNTimeManager : NSObject {
    <MNTimeProvider> * _provider;
    MNObserverHashTable * _timeManagerObservers;
}

@property (nonatomic, retain) <MNTimeProvider> *provider;

+ (id)currentDate;
+ (double)currentTime;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_resetToDefaultProvider;
- (id)init;
- (id)provider;
- (void)registerObserver:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
