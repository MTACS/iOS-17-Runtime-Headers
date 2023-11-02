
@protocol WFActionProviderDelegate <NSObject>

@required

- (void)actionProviderDidChange:(WFActionProvider *)arg1 updatedActions:(NSSet *)arg2 removedActions:(NSSet *)arg3 addedActions:(NSSet *)arg4;

@end
