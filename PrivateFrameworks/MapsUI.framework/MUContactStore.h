
@interface MUContactStore : NSObject {
    CNContactStore * _cnContactStore;
    bool  _isGuardianRestrictedCNContainer;
    bool  _needsRefetch;
    GEOObserverHashTable * _observers;
    geo_isolater * _propertyIsolator;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CNContactStore *cnContactStore;
@property (nonatomic, readonly) bool hasContactAccess;
@property (nonatomic, readonly) bool isGuardianRestrictedCNContainer;

- (void).cxx_destruct;
- (bool)_calculateIfContainerIsGuardianRestricted;
- (void)_contactStoreDidChange;
- (void)_invokeObservers;
- (id)cnContactStore;
- (void)fetchContactForPickerDisplayUsingContact:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchStoredContactForMatchingMapItem:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchUnifiedContactForIdentifier:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasContactAccess;
- (id)init;
- (bool)isGuardianRestrictedCNContainer;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)removeMapsDataFromContact:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterObserver:(id)arg1;

@end
