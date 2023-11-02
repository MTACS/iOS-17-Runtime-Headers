
@protocol MUActivityViewControllerDelegate <NSObject>

@required

- (void)mapkitActivityViewController:(MUActivityViewController *)arg1 postCompletedActivityOfType:(NSString *)arg2 completed:(bool)arg3;
- (void)mapkitActivityViewController:(MUActivityViewController *)arg1 preCompletedActivityOfType:(NSString *)arg2 completed:(bool)arg3;

@end
