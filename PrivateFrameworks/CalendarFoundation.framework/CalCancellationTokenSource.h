
@interface CalCancellationTokenSource : NSObject <CalCancellationToken> {
    _Atomic bool  _isCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CalCancellationToken> *token;

- (void)cancel;
- (bool)isCancelled;
- (id)token;

@end
