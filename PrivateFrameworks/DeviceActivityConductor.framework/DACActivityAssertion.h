
@interface DACActivityAssertion : NSObject {
    DACActivityDescriptor * _activity;
    DACChangeMarker * _changeMarker;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    DACActivityDescriptor * _origin;
    id /* block */  _relinquishHandler;
    unsigned long long  _state;
}

@property (nonatomic, readonly) DACActivityDescriptor *activity;
@property (nonatomic, readonly) DACChangeMarker *changeMarker;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) DACActivityDescriptor *origin;
@property (nonatomic, readonly, copy) id /* block */ relinquishHandler;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)_initWithActivity:(id)arg1 requester:(id)arg2 changeMarker:(id)arg3 relinquishHandler:(id /* block */)arg4;
- (void)_withLock:(id /* block */)arg1;
- (id)activity;
- (id)changeMarker;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id /* block */)invalidationHandler;
- (bool)isEqual:(id)arg1;
- (id)origin;
- (id /* block */)relinquishHandler;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOrigin:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
