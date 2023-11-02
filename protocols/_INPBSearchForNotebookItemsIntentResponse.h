
@protocol _INPBSearchForNotebookItemsIntentResponse <NSObject>

@required

+ (Class)notesType;
+ (Class)taskListsType;
+ (Class)tasksType;

- (int)StringAsSortType:(NSString *)arg1;
- (void)addNotes:(_INPBNote *)arg1;
- (void)addTaskLists:(_INPBTaskList *)arg1;
- (void)addTasks:(_INPBTask *)arg1;
- (void)clearNotes;
- (void)clearTaskLists;
- (void)clearTasks;
- (bool)hasSortType;
- (NSArray *)notes;
- (_INPBNote *)notesAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesCount;
- (void)setHasSortType:(bool)arg1;
- (void)setNotes:(NSArray *)arg1;
- (void)setSortType:(int)arg1;
- (void)setTaskLists:(NSArray *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (int)sortType;
- (NSString *)sortTypeAsString:(int)arg1;
- (NSArray *)taskLists;
- (_INPBTaskList *)taskListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskListsCount;
- (NSArray *)tasks;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;

@end
