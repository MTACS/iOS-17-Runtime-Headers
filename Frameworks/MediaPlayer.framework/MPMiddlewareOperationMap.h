
@interface MPMiddlewareOperationMap : NSObject {
    NSMutableArray * _middleware;
    NSMapTable * _middlewareOperationMap;
    NSMutableArray * _operations;
}

+ (id)mapForRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)allMiddleware;
- (id)allOperations;
- (id)operationsForMiddleware:(id)arg1;

@end
