
@interface HMDCoreFollowUpPostItemOperation : HMFOperation {
    <HMDFollowUpController> * _followUpController;
    <HMDFollowUpItem> * _itemToPost;
}

@property (nonatomic, retain) <HMDFollowUpController> *followUpController;
@property (nonatomic, copy) <HMDFollowUpItem> *itemToPost;

- (void).cxx_destruct;
- (id)followUpController;
- (id)initWithItemToPost:(id)arg1 followUpController:(id)arg2;
- (id)itemToPost;
- (void)main;
- (void)setFollowUpController:(id)arg1;
- (void)setItemToPost:(id)arg1;

@end
