
@interface BPSSetupPageViewController : UIViewController <BPSBuddyController> {
    UIView * _contentView;
    <BPSBuddyControllerDelegate> * _delegate;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } computedTitleFrame;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BPSBuddyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_baseIdentifier;
- (void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addFollowUpForPageWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computedTitleFrame;
- (id)contentView;
- (bool)contentViewIsInAdjustedScrollView;
- (id)delegate;
- (id)followUpActions;
- (id)followUpIdentifier;
- (id)init;
- (id)localizedInformativeNotificationText;
- (id)localizedInformativeText;
- (id)localizedNotificationTitle;
- (id)localizedTitle;
- (void)removeFollowupForPageWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (id)titleAttributedString;
- (id)titleLabel;
- (id)titleString;
- (void)updateTitleLabel;
- (double)verticalTitleInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)wantsFollowUpNotification;

@end
