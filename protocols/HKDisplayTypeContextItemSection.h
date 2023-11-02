
@protocol HKDisplayTypeContextItemSection <NSObject>

@required

- (NSArray *)items;
- (void)setItems:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@optional

- (UIAction *)accessoryButtonAction;
- (void)setAccessoryButtonAction:(UIAction *)arg1;

@end
