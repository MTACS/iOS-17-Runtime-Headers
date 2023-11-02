
@interface WFContentCoercionNode : NSObject {
    id  _itemOrItemClass;
    WFContentCoercionNode * _parent;
}

@property (nonatomic, readonly) NSOrderedSet *coercionPath;
@property (nonatomic, readonly) id itemOrItemClass;
@property (nonatomic, readonly) NSOrderedSet *itemOrItemClassPath;
@property (nonatomic, readonly) WFContentCoercionNode *parent;

+ (id)coercionNodeWithItem:(id)arg1 parent:(id)arg2;
+ (id)coercionNodeWithItemClass:(Class)arg1 parent:(id)arg2;
+ (id)coercionNodeWithItemOrItemClass:(id)arg1 parent:(id)arg2;

- (void).cxx_destruct;
- (id)coercionPath;
- (id)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)description;
- (id)initWithItemOrItemClass:(id)arg1 parent:(id)arg2;
- (id)itemOrItemClass;
- (id)itemOrItemClassPath;
- (id)parent;
- (id)runCoercionSynchronouslyWithOptions:(id)arg1 error:(id*)arg2;
- (void)runCoercionWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)successorsWithOptions:(id)arg1;
- (id)successorsWithOptions:(id)arg1 goalType:(id)arg2;

@end
