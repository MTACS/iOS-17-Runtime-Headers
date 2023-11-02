
@interface CUTPromiseSeal : NSObject {
    CUTPromise * _promise;
}

@property (nonatomic, retain) CUTPromise *promise;

- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)promise;
- (void)setPromise:(id)arg1;

@end
