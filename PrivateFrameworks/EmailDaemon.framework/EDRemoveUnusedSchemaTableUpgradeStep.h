
@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EDTableUpgradeStep, EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)_copyMessagesData:(id)arg1;
+ (int)_createTempMessagesTable:(id)arg1;
+ (int)_dropTable:(id)arg1 connection:(id)arg2;
+ (int)_dropThreadCategoriesIndex:(id)arg1;
+ (int)_recreateMessagesIndices:(id)arg1;
+ (int)_recreateThreadsIndices:(id)arg1;
+ (int)_recreateThreadsTable:(id)arg1;
+ (int)_swapMessagesTables:(id)arg1;
+ (int)_truncateTable:(id)arg1 connection:(id)arg2;
+ (id)log;
+ (int)runWithConnection:(id)arg1;

@end
