
@interface _UISceneEventResponder : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    _UISceneEventResponse * _dataLock_first;
    _UISceneEventResponse * _dataLock_last;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sendLock;
}

- (void).cxx_destruct;
- (void)enqueuePostCommitResponse:(id /* block */)arg1;
- (void)enqueuePostSynchronizeResponse:(id /* block */)arg1;
- (id)init;

@end
