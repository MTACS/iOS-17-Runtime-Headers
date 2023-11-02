
@interface LNPerformAllResultsQueryOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    NSString * _entityMangledTypeName;
    NSString * _entityType;
    LNQueryOutput * _output;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *entityMangledTypeName;
@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) LNQueryOutput *output;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)entityMangledTypeName;
- (id)entityType;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 entityMangledTypeName:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)output;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEntityMangledTypeName:(id)arg1;
- (void)setEntityType:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)start;

@end
