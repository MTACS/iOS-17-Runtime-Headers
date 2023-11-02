
@interface AMDAppTabInfo : NSManagedObject

@property (nonatomic, copy) NSString *tabName;
@property (nonatomic, copy) NSString *useCaseId;

+ (id)deleteAllTabs:(id*)arg1;
+ (id)deleteTabsForUseCase:(id)arg1 error:(id*)arg2;
+ (id)fetchAllTabInfo:(id*)arg1;
+ (id)fetchRequest;
+ (id)getInfoForTab:(id)arg1 error:(id*)arg2;
+ (id)refreshTabsForUseCase:(id)arg1 tabs:(id)arg2 error:(id*)arg3;
+ (void)saveTabInfo:(id)arg1 error:(id*)arg2;

@end
