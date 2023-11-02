
@interface SBBackgroundFetchTask : NSObject {
    FBSApplicationInfo * _appInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSAssertion * _lock_assertion;
    id /* block */  _lock_completionHandler;
    bool  _lock_finished;
    int  _sequenceNumber;
}

+ (int)_nextSequenceNumber;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)execute;

@end
