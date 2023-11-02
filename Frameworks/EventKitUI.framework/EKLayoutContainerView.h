
@interface EKLayoutContainerView : UIView {
    <EKLayoutContainerViewDelegate> * _delegate;
}

@property (nonatomic) <EKLayoutContainerViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;

@end
