
@interface MCDErrorLoadingView : UIView {
    <MCDErrorViewDelegate> * _delegate;
    bool  _shouldEnableNetwork;
}

@property (nonatomic) <MCDErrorViewDelegate> *delegate;
@property (nonatomic) bool shouldEnableNetwork;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTitle:(id)arg1 buttonText:(id)arg2;
- (void)retryButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldEnableNetwork:(bool)arg1;
- (bool)shouldEnableNetwork;

@end
