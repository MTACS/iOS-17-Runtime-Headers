
@interface DMCEnrollmentTableViewAppLockupCell : UITableViewCell <ASCLockupViewDelegate, DMCEnrollmentTableViewCellDataSource> {
    NSNumber * _iTunesItemID;
    ASCLockupView * _lockupView;
    UIViewController * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *iTunesItemID;
@property (nonatomic, retain) ASCLockupView *lockupView;
@property UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cell;
- (double)cellHeight;
- (double)estimatedCellHeight;
- (id)iTunesItemID;
- (id)initWithLockupRequest:(id)arg1 lockupViewGroup:(id)arg2 presentingViewController:(id)arg3;
- (void)layoutSubviews;
- (id)lockupView;
- (id)presentingViewController;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)setITunesItemID:(id)arg1;
- (void)setLockupView:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
