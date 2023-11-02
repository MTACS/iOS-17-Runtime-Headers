
@interface _UIEvaluatedObjectCache : NSObject <BSDebugDescriptionProviding> {
    id /* block */  _evaluationBlock;
    id /* block */  _sortComparator;
    NSMutableOrderedSet * _sortedObjects;
    id  _topEvaluatedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
