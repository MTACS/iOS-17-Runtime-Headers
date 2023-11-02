
@protocol _UINavigationBarContentViewDelegate

@required

- (void)navigationBarContentViewDidChangeDesiredHeight:(_UINavigationBarContentView *)arg1;
- (void)navigationBarContentViewDidChangeTintColor:(_UINavigationBarContentView *)arg1;
- (void)navigationBarContentViewDidTriggerBackAction:(_UINavigationBarContentView *)arg1 fromBackButtonItem:(UIBarButtonItem *)arg2;
- (void)navigationBarContentViewDidTriggerCustomization:(_UINavigationBarContentView *)arg1;
- (void)navigationBarContentViewDidTriggerTitleRenameAction:(_UINavigationBarContentView *)arg1;

@end
