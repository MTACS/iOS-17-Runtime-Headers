
@protocol INSearchForNotebookItemsIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)notes;
- (void)setNotes:(NSArray *)arg1;
- (void)setSortType:(long long)arg1;
- (void)setTaskLists:(NSArray *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (long long)sortType;
- (NSArray *)taskLists;
- (NSArray *)tasks;

@end
