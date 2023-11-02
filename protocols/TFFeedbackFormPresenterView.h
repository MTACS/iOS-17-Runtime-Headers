
@protocol TFFeedbackFormPresenterView

@required

- (void)prepareForEntryType:(unsigned long long)arg1;
- (void)reloadEntriesAtIndexPaths:(NSArray *)arg1;
- (void)reloadEntryGroupsAtIndices:(NSIndexSet *)arg1;
- (void)setNavigationItemTitle:(NSString *)arg1;
- (void)showErrorAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(bool)arg1;

@end
