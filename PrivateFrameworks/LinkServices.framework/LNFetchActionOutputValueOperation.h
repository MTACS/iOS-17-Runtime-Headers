
@interface LNFetchActionOutputValueOperation : LNInterfaceConnectionOperation {
    LNActionOutput * _actionOutput;
    id /* block */  _completionHandler;
    LNValue * _value;
}

@property (nonatomic, retain) LNActionOutput *actionOutput;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) LNValue *value;

- (void).cxx_destruct;
- (id)actionOutput;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 actionOutput:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setActionOutput:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setValue:(id)arg1;
- (void)start;
- (id)value;

@end
