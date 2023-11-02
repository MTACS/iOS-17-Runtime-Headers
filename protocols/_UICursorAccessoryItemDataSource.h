
@protocol _UICursorAccessoryItemDataSource <NSObject>

@required

- (void)configureItemView:(_UICursorAccessoryItemView *)arg1 forAccessoryIdentifier:(NSString *)arg2;
- (void)didTapToActivateAccessoryWithIdentifier:(NSString *)arg1;

@end
