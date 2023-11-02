
@protocol WFSetOrientationLockIntentHandling <NSObject>

@required

- (void)handleSetOrientationLock:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetOrientationLockIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetOrientationLockIntentResponse *, void*

@optional

- (void)confirmSetOrientationLock:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetOrientationLockIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetOrientationLockIntentResponse *, void*

@end
