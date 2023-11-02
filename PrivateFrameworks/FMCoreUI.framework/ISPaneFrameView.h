
@interface ISPaneFrameView : UIView {
    FMSlidingPaneViewController * _owningViewController;
}

@property (nonatomic) FMSlidingPaneViewController *owningViewController;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)owningViewController;
- (void)setOwningViewController:(id)arg1;

@end
