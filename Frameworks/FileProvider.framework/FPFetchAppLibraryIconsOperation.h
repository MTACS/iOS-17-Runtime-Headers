
@interface FPFetchAppLibraryIconsOperation : FPOperation <FPOperationClient> {
    <FPOperationProgressDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    NSDictionary * _itemIdentifierByAppBundleID;
    double  _screenScale;
}

@property (nonatomic) <FPOperationProgressDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithAppLibraryItems:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3;
- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
