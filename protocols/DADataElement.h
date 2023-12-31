
@protocol DADataElement <NSObject>

@required

- (bool)deleteFromContainer:(void*)arg1;
- (bool)loadLocalItemWithAccount:(DAAccount *)arg1;
- (bool)saveServerIDToExistingItem;
- (bool)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(bool)arg3 outMergeDidChooseLocalProperties:(bool*)arg4 account:(DAAccount *)arg5;
- (void)setLocalItem:(void*)arg1;

@end
