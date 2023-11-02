
@interface _AAURLSessionOperation : NSObject {
    id /* block */  _completion;
    NSMutableData * _mutableData;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) NSData *data;

+ (id)operationWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id /* block */)completion;
- (id)data;
- (id)init;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2;

@end
