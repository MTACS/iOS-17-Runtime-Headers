
@interface EDVisibleMessagesReloadRegistry : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _notifyToken;
    <EFAssertableScheduler> * _observationScheduler;
    NSHashTable * _observers;
    EFDebouncer * _reloadDebouncer;
}

+ (id)log;

- (void).cxx_destruct;
- (void)_reloadVisibleMessages;
- (void)_scheduleVisibleMessageReload;
- (id)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
