
@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation {
    <NFCopying> * _prefetchedContent;
    NSArray * _resultTodayModuleDescriptors;
}

@property (nonatomic, copy) <NFCopying> *prefetchedContent;
@property (nonatomic, copy) NSArray *resultTodayModuleDescriptors;

- (void).cxx_destruct;
- (void)_continueOperationWithTodayData:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)prefetchedContent;
- (id)resultTodayModuleDescriptors;
- (void)setPrefetchedContent:(id)arg1;
- (void)setResultTodayModuleDescriptors:(id)arg1;
- (bool)validateOperation;

@end
