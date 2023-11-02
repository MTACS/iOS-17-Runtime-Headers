
@interface ICCollapsibleContainerView : ICCollapsibleBaseView {
    UIView * _containedView;
}

@property (nonatomic, retain) UIView *containedView;

- (void).cxx_destruct;
- (id)containedView;
- (void)performSetup;
- (void)setContainedView:(id)arg1;

@end
