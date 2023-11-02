
@interface CUTUnsafePromiseSeal : NSObject {
    CUTUnsafePromise * _promise;
}

@property (nonatomic, retain) CUTUnsafePromise *promise;

- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (id)init;
- (id)promise;
- (void)setPromise:(id)arg1;

@end
