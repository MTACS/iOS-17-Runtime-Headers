
@interface MPAVRoutingControllerSelection : NSObject {
    id /* block */  _completion;
    NSArray * _routes;
    long long  _selectionOperation;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSArray *routes;
@property (nonatomic) long long selectionOperation;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)initWithRoutes:(id)arg1 selectionOperation:(long long)arg2;
- (id)routes;
- (long long)selectionOperation;
- (void)setCompletion:(id /* block */)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSelectionOperation:(long long)arg1;

@end
