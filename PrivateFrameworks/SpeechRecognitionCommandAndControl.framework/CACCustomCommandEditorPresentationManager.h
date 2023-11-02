
@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager

+ (int)axNotification;
+ (long long)remoteViewType;

- (void)_showCustomCommandEditorWithContextKey:(id)arg1 contextValue:(id)arg2;
- (void)handleAXNotificationData:(void*)arg1;
- (bool)showCustomCommandEditorWithGesture:(id)arg1;
- (bool)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg1;
- (bool)showCustomCommandEditorWithShortcutsWorkflow:(id)arg1;
- (bool)showCustomCommandEditorWithTextToInsert:(id)arg1;

@end
