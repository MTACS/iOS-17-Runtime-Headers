
@protocol HACCContentModuleDelegate <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)backgroundUpdateQueue;
- (void)controlDidActivate:(UIView<HACCContentModule> *)arg1;
- (AXRemoteHearingAidDevice *)currentHearingDevice;
- (double)preferredContentWidth;
- (bool)shouldDisplayControlForModule:(unsigned long long)arg1;
- (bool)shouldDisplayOtherDevice;
- (void)updateHeight;
- (void)updateView;
- (void)updateViewForModule:(unsigned long long)arg1;
- (void)updateViewForProperties:(NSArray *)arg1;
- (void)viewController:(HACCContentViewController *)arg1 didExpand:(bool)arg2;

@end
