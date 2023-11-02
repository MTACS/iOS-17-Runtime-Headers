
@interface WFLibraryQuery : NSObject <NSCopying> {
    void identity;
    void performer;
    void queryDescription;
    void type;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long type;

+ (id)deletedFolders;
+ (id)sortedFolders;
+ (id)sortedGroupings;
+ (id)sortedWorkflowsWithQuery:(id)arg1;
+ (id)sortedWorkflowsWithQuery:(id)arg1 hasTombstonedConflicts:(bool)arg2;
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(bool)arg2 associatedAppBundleIdentifier:(id)arg3;
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(bool)arg2 limit:(long long)arg3;
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(bool)arg2 nameContaining:(id)arg3 limit:(long long)arg4;
+ (id)sortedWorkflowsWithQuery:(id)arg1 sortByName:(bool)arg2 nameEqualing:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)performReturningCollectionsIn:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)performReturningShortcutsIn:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (long long)type;

@end
