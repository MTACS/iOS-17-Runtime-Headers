
@interface HMDCoreFollowUpRemoveItemsOperation : HMFOperation {
    <HMDFollowUpController> * _followUpController;
    NSArray * _identifiersToRemove;
}

@property (nonatomic, retain) <HMDFollowUpController> *followUpController;
@property (nonatomic, copy) NSArray *identifiersToRemove;

- (void).cxx_destruct;
- (id)followUpController;
- (id)identifiersToRemove;
- (id)initWithIdentifiersToRemove:(id)arg1 followUpController:(id)arg2;
- (void)main;
- (void)setFollowUpController:(id)arg1;
- (void)setIdentifiersToRemove:(id)arg1;

@end
