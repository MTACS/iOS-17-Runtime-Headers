
@interface GEOAddressCorrectionRequester : NSObject {
    NSMapTable * _pendingRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingRequestsLock;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startAddressCorrectionInitRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)startAddressCorrectionUpdateRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;

@end
