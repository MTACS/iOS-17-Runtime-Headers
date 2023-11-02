
@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient> {
    <FPOperationProgressDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSizeToScale;
    NSDictionary * _dictionary;
    FPItemManager * _itemManager;
}

@property (nonatomic) <FPOperationProgressDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDictionary:(id)arg1 desiredSizeToScale:(struct CGSize { double x1; double x2; })arg2 itemManager:(id)arg3;
- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
