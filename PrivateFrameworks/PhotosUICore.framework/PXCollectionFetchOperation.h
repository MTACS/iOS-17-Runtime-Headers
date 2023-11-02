
@interface PXCollectionFetchOperation : NSOperation {
    PHCollection * _collection;
    <PXCollectionFetchOperationDelegate> * _delegate;
    PHFetchOptions * _fetchOptions;
    PHFetchResult * _outputFetchResult;
}

@property (nonatomic, readonly) PHCollection *collection;
@property (nonatomic) <PXCollectionFetchOperationDelegate> *delegate;
@property (nonatomic, retain) PHFetchOptions *fetchOptions;
@property (nonatomic, retain) PHFetchResult *outputFetchResult;

+ (id)fetchOperationWithCollection:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)collection;
- (id)delegate;
- (id)fetchOptions;
- (void)handleBegin;
- (void)handleFinish;
- (id)init;
- (id)initWithCollection:(id)arg1;
- (void)main;
- (id)outputFetchResult;
- (void)setDelegate:(id)arg1;
- (void)setFetchOptions:(id)arg1;
- (void)setOutputFetchResult:(id)arg1;

@end
