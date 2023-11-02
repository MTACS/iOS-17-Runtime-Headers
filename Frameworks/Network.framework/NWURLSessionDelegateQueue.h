
@interface NWURLSessionDelegateQueue : NSObject {
    NSObject<OS_dispatch_queue> * __dispatchQueue;
    NSOperationQueue * __operationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

- (void).cxx_destruct;

@end
