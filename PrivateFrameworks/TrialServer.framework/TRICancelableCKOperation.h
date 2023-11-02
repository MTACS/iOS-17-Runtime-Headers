
@interface TRICancelableCKOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock * _lock;
}

@property (nonatomic, readonly) bool isCanceled;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)cancel;
- (id)initWithOperation:(id)arg1;
- (bool)isCanceled;

@end
