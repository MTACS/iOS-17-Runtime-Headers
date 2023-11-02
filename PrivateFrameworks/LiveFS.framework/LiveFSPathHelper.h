
@interface LiveFSPathHelper : NSObject {
    NSData * _attributes;
    NSError * _error;
    NSMutableArray * attributeStack;
    id /* block */  completionHandler;
    unsigned long long  currentPathComponent;
    NSMutableOrderedSet * fileHandleStack;
    unsigned long long  fileHandleStackCount;
    bool  lookupCompleted;
    bool  lookupInProgress;
    unsigned long long  numberOfSymlinks;
    <LiveFSVolumeCore> * ourMount;
    NSObject<OS_dispatch_queue> * ourQueue;
    NSArray * pathComponents;
    bool  resolveTrailingSymlink;
    NSString * rootFileHandle;
}

@property (readonly) NSData *attributes;
@property (readonly) NSError *error;
@property (readonly) NSString *fileHandle;
@property bool resolveTrailingSymlink;

+ (id)helperWithMount:(id)arg1 andPath:(id)arg2;

- (void).cxx_destruct;
- (id)attributes;
- (id)currentFileHandle;
- (void)dealloc;
- (id)error;
- (id)fileHandle;
- (void)finalizeWithErrno:(int)arg1;
- (void)finalizeWithError:(id)arg1;
- (id)initWithMount:(id)arg1 andPath:(id)arg2;
- (void)lookupNextComponent;
- (void)lookupWithCompletionHandler:(id /* block */)arg1;
- (id)peekFileHandle;
- (id)popFileHandle;
- (void)processLookupReplyWithResult:(int)arg1 item:(id)arg2 andAttributes:(id)arg3;
- (void)processReadLinkReplyForLink:(id)arg1 withResult:(int)arg2 linkString:(id)arg3 andAttributes:(id)arg4;
- (void)pushFileHandle:(id)arg1 attributes:(id)arg2;
- (void)reclaimItem:(id)arg1 withContinuation:(id /* block */)arg2;
- (void)resolveSymlink:(id)arg1;
- (bool)resolveTrailingSymlink;
- (void)setResolveTrailingSymlink:(bool)arg1;

@end
