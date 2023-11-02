
@interface DDEKDayViewController : EKDayViewController {
    EKEvent * _dd_event;
}

@property (retain) EKEvent *dd_event;

- (void).cxx_destruct;
- (id)dd_event;
- (void)dd_update_scroll;
- (void)didMoveToParentViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDd_event:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
