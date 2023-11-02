
@protocol MGGroupsQueryAgentDelegate <NSObject>

@optional

- (void)groupsQueryAgent:(MGGroupsQueryAgent *)arg1 didFindGroups:(NSArray *)arg2 forQuery:(MGOutstandingQuery *)arg3;

@end
