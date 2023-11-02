
@interface SBSSystemNotesPresentationHandle : NSObject <SBSSystemNotesPresentationServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _calloutSerialQueue;
    SBSSystemNotesPresentationConfiguration * _configuration;
    SBSSystemNotesPresentationClientToServerProxy * _handleClient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_observers;
    long long  _lock_presentationMode;
    long long  _lock_state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long presentationMode;
@property (nonatomic, readonly, copy) SBSSystemNotesPresentationConfiguration *requestedConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateWithError:(id)arg1 locally:(bool)arg2;
- (void)activate;
- (void)addObserver:(id)arg1;
- (oneway void)configuration:(id)arg1 didChangeToPresentationMode:(id)arg2;
- (oneway void)configuration:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 client:(id)arg2;
- (void)invalidate;
- (long long)presentationMode;
- (void)removeObserver:(id)arg1;
- (id)requestedConfiguration;

@end
