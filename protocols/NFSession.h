
@protocol NFSession <NSObject>

@required

- (void)endSession;
- (void)endSessionAndStartNextSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSObject<NFSession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)endSessionWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isFirstInQueue;

@end
