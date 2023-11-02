
@interface DAEGrantedDelegatesListContext : NSObject {
    id /* block */  _resultsBlock;
}

- (void).cxx_destruct;
- (void)finishedWithResults:(id)arg1 error:(id)arg2;
- (id)initWithResultsBlock:(id /* block */)arg1;

@end
