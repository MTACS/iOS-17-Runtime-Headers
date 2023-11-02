
@interface PTUIPushViewControllerRowAction : PTRowAction {
    id /* block */  _viewControllerCreator;
}

@property (nonatomic, readonly) id /* block */ viewControllerCreator;

+ (id)actionWithViewControllerCreator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)defaultHandler;
- (bool)deselectsRowOnSuccess;
- (id /* block */)viewControllerCreator;

@end
