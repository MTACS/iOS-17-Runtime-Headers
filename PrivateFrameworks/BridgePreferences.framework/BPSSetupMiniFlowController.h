
@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController> {
    <BPSBuddyControllerDelegate> * _delegate;
    bool  _isDisplayingInSkippedMiniFlow;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BPSBuddyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDisplayingInSkippedMiniFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (bool)isDisplayingInSkippedMiniFlow;
- (id)navigationController;
- (void)pushController:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIsDisplayingInSkippedMiniFlow:(bool)arg1;
- (id)viewController;

@end
