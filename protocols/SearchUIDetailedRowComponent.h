
@protocol SearchUIDetailedRowComponent <NSObject>

@required

+ (bool)supportsRowModel:(SearchUIDetailedRowModel *)arg1;

- (<SearchUIFeedbackDelegate> *)feedbackDelegate;
- (SearchUIDetailedRowModel *)rowModel;
- (void)setFeedbackDelegate:(id <SearchUIFeedbackDelegate>)arg1;
- (void)setRowModel:(SearchUIDetailedRowModel *)arg1;
- (void)setView:(UIView *)arg1;
- (UIView *)setupView;
- (bool)shouldVerticallyCenter;
- (void)updateWithContacts:(NSArray *)arg1;
- (void)updateWithRowModel:(SearchUIDetailedRowModel *)arg1;
- (UIView *)view;

@end
