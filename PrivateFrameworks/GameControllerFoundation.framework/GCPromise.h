
@interface GCPromise : NSObject {
    GCFuture * _future;
}

@property (getter=isCancelled, readonly) bool cancelled;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)failWithError:(id)arg1;
- (id)future;
- (id)init;
- (bool)isCancelled;
- (id)redactedDescription;
- (void)succeedWithResult:(id)arg1;

@end
