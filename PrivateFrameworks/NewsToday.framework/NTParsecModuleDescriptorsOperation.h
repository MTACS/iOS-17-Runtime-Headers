
@interface NTParsecModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation {
    NSArray * _resultTodayModuleDescriptors;
}

@property (nonatomic, copy) NSArray *resultTodayModuleDescriptors;

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultTodayModuleDescriptors;
- (void)setResultTodayModuleDescriptors:(id)arg1;
- (bool)validateOperation;

@end
