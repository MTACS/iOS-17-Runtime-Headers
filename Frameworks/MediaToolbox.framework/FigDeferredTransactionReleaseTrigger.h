
@interface FigDeferredTransactionReleaseTrigger : NSObject {
    id /* block */  _blockToCallOnRelease;
}

- (void)dealloc;
- (id)initWithReleaseBlock:(id /* block */)arg1;

@end
