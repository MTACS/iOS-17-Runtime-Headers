
@interface PXToastPlacardView : UIView {
    NSMutableArray * _actions;
    bool  _didLoad;
    NSString * _message;
}

@property (nonatomic, copy) NSString *message;

- (void).cxx_destruct;
- (void)addActionWithTitle:(id)arg1 action:(id /* block */)arg2;
- (void)didMoveToSuperview;
- (id)message;
- (void)setMessage:(id)arg1;

@end
