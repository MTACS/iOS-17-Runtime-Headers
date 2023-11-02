
@interface NRRegistryHistoryStore : NRRegistry {
    NSMutableDictionary * _diffIndexObservers;
    NRDeviceCollectionHistory * _history;
    int  _keyBagStatusChangedNotificationToken;
}

@property (nonatomic, readonly) NRDeviceCollectionHistory *history;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2;
- (id)addDiffIndexObserverWithWriteBlock:(id /* block */)arg1;
- (id)collection;
- (void)dealloc;
- (void)grabHistoryWithReadBlock:(id /* block */)arg1;
- (void)grabHistoryWithWriteBlock:(id /* block */)arg1;
- (id)history;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (void)removeDiffIndexObserver:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)syncGrabHistoryWithReadBlock:(id /* block */)arg1;
- (void)syncGrabHistoryWithWriteBlock:(id /* block */)arg1;

@end
