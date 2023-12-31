
@protocol INCreateTaskListIntentExport <NSObject, JSExport>

@required

- (INSpeakableString *)groupName;
- (id)init;
- (void)setGroupName:(INSpeakableString *)arg1;
- (void)setTaskTitles:(NSArray *)arg1;
- (void)setTitle:(INSpeakableString *)arg1;
- (NSArray *)taskTitles;
- (INSpeakableString *)title;

@end
