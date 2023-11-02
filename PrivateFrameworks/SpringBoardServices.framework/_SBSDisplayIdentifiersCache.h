
@interface _SBSDisplayIdentifiersCache : NSObject {
    id /* block */  _changedBlock;
    int  _changedToken;
    NSSet * _displayIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_noteChanged;
- (void)dealloc;
- (id)displayIdentifiers;
- (id)init;
- (void)registerChangedBlock:(id /* block */)arg1;

@end
