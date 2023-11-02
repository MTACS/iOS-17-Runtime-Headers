
@interface MTRCluster : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (struct Span<const unsigned char> { char *x1; unsigned long long x2; })asByteSpan:(id)arg1;
- (struct Span<const char> { char *x1; unsigned long long x2; })asCharSpan:(id)arg1;
- (id)callbackQueue;
- (id)initWithQueue:(id)arg1;

@end
