
@protocol PRXCardContentViewDelegate <NSObject>

@required

- (NSArray *)actionButtons;
- (NSArray *)auxiliaryViews;
- (PRXButton *)dismissButton;
- (void)setActionButtons:(NSArray *)arg1;
- (void)setDismissButton:(PRXButton *)arg1;

@end
