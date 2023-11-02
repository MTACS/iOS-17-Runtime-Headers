
@interface IMPromise : NSObject {
    NSMutableArray * _completionBlocks;
    IMResult * _result;
}

+ (id)all:(id)arg1;

- (void).cxx_destruct;
- (bool)completed;
- (void)failWithError:(id)arg1;
- (void)fullfillWithValue:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)registerCompletionBlock:(id /* block */)arg1;
- (id)then:(id /* block */)arg1;

@end
