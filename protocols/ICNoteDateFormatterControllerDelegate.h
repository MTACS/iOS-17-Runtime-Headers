
@protocol ICNoteDateFormatterControllerDelegate <NSObject>

@required

- (void)formatter:(ICNoteDateFormatterController *)arg1 iconHiddenDidChange:(bool)arg2;
- (void)formatter:(ICNoteDateFormatterController *)arg1 textDidChange:(NSString *)arg2;

@optional

- (NSDictionary *)dateViewAttributes;
- (double)dateViewMaximumWidth;
- (void)formatter:(ICNoteDateFormatterController *)arg1 iconImageDidChange:(UIImage *)arg2;

@end
