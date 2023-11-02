
@interface HDDrugInteractionFactorStateProvider : NSObject <HDDrugInteractionFactorStateProvider, HDKeyValueDomainObserver> {
    HDDaemon * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_isAlcoholDrugInteractionFactorEnabled;
    bool  _lock_isMarijuanaDrugInteractionFactorEnabled;
    bool  _lock_isTobaccoDrugInteractionFactorEnabled;
    HDKeyValueDomain * _lock_medicationsKeyValueDomain;
    HKObserverSet<HDDrugInteractionFactorStateObserver> * _observers;
}

@property (nonatomic, readonly) HDDaemon *daemon;

- (void).cxx_destruct;
- (void)addDrugInteractionFactorStateObserver:(id)arg1 queue:(id)arg2;
- (id)daemon;
- (void)dealloc;
- (void)didUpdateKeyValueDomain:(id)arg1;
- (long long)hasDrugInteractionFactorInProfile:(id)arg1;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)monitorDrugInteractionFactorsInProfile:(id)arg1;
- (void)removeDrugInteractionFactorStateObserver:(id)arg1;

@end
