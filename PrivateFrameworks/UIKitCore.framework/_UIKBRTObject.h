
@interface _UIKBRTObject : NSObject {
    NSMutableArray * _owner;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

- (void).cxx_destruct;
- (id)nextEntry;
- (id)owner;
- (id)previousEntry;
- (void)setOwner:(id)arg1;

@end
