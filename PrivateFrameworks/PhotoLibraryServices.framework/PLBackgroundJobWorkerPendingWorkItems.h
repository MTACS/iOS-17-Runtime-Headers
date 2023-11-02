
@interface PLBackgroundJobWorkerPendingWorkItems : NSObject {
    PLBackgroundJobCriteria * _criteria;
    NSArray * _workItemsNeedingProcessing;
}

@property (nonatomic, readonly, copy) PLBackgroundJobCriteria *criteria;
@property (nonatomic, readonly, copy) NSArray *workItemsNeedingProcessing;

- (void).cxx_destruct;
- (id)criteria;
- (id)initWithCriteria:(id)arg1 workItemsNeedingProcessing:(id)arg2;
- (id)initWithZeroWorkItems;
- (id)workItemsNeedingProcessing;

@end
