
@interface ASCWorkspace : NSObject {
    NSOperationQueue * _openApplicationOperationQueue;
    NSMutableDictionary * _pendingResults;
    NSRecursiveLock * _stateLock;
}

@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (nonatomic, retain) NSOperationQueue *openApplicationOperationQueue;
@property (readonly) NSMutableDictionary *pendingResults;
@property (nonatomic, readonly) NSRecursiveLock *stateLock;

+ (id)log;
+ (id)sharedWorkspace;
+ (void)withSharedWorkspace:(id)arg1 perform:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_init;
- (void)enqueueOpenApplicationOperation:(id)arg1 pendingResult:(id)arg2;
- (bool)isExtension;
- (id)openApplicationOperationQueue;
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 pendingResult:(id)arg3;
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;
- (void)openApplicationWithBundleIdentifier:(id)arg1 usingOpenResourceOperationWithPayloadURL:(id)arg2 options:(id)arg3 pendingResult:(id)arg4;
- (id)openProductURL:(id)arg1;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (id)openSensitiveURL:(id)arg1;
- (id)openURL:(id)arg1;
- (id)openURL:(id)arg1 frontBoardOptions:(id)arg2;
- (id)pendingResults;
- (id)popPendingResultForOperationName:(id)arg1;
- (void)setOpenApplicationOperationQueue:(id)arg1;
- (id)stateLock;

@end
