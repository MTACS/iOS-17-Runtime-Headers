
@interface VSStorefrontCodeLoadOperation : VSAsyncOperation {
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
}

@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)privateQueue;
- (id)result;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;

@end
