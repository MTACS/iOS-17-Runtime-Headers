
@interface PXSectionedDataSourceWaitingCondition : NSObject {
    id /* block */  _completionHandler;
    id /* block */  _condition;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ condition;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)condition;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCondition:(id /* block */)arg1;

@end
