
@interface _PXAssetEditOperationPredicateRecord : NSObject {
    Class  _performerClass;
    id /* block */  _predicate;
}

@property (nonatomic, readonly) Class performerClass;
@property (nonatomic, readonly, copy) id /* block */ predicate;

- (void).cxx_destruct;
- (id)initWithPerformerClass:(Class)arg1 predicate:(id /* block */)arg2;
- (Class)performerClass;
- (id /* block */)predicate;

@end
