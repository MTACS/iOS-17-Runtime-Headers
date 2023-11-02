
@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface> {
    NSMapTable * _observersByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    EDVIPManager * _vipManager;
    NSSet * allVIPWaitForResult;
}

@property (nonatomic, readonly, copy) NSSet *allVIPWaitForResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EDVIPManager *vipManager;

- (void).cxx_destruct;
- (void)_vipsDidChange:(id)arg1;
- (id)allVIPWaitForResult;
- (void)cancelObservation:(id)arg1;
- (void)dealloc;
- (id)initWithVIPManager:(id)arg1;
- (void)registerObserver:(id)arg1 observationIdentifier:(id)arg2;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (id)vipManager;

@end
