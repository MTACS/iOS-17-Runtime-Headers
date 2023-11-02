
@protocol TRAPreferencesTree <NSObject>

@required

- (NSString *)debugName;
- (NSString *)recursiveDescription;
- (NSArray *)topologicalSort;

@end
