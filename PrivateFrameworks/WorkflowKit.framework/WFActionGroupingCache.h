
@interface WFActionGroupingCache : NSObject {
    NSMutableDictionary * _contents;
}

@property (nonatomic, readonly) NSDictionary *actionsByGroupingIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *contents;

- (void).cxx_destruct;
- (id)actionsByGroupingIdentifier;
- (id)actionsForGroupingIdentifier:(id)arg1;
- (void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2;
- (id)contents;
- (id)init;
- (void)removeAction:(id)arg1;
- (void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2;

@end
