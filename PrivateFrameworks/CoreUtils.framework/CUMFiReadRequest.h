
@interface CUMFiReadRequest : NSObject {
    id /* block */  _completion;
    unsigned long long  maxLen;
    unsigned long long  minLen;
    CUMFiReadRequest * next;
}

@property (nonatomic, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;

@end
