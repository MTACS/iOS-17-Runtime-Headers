
@protocol PKSelectActionViewDelegate <NSObject>

@required

- (void)setRightBarButtonEnabled:(bool)arg1;

@optional

- (void)selectActionViewDidSelectAction:(PKPaymentPassAction *)arg1;

@end
