
@interface TCXPCClient : NSObject {
    NSXPCConnection * _connection;
    bool  _valid;
}

- (void).cxx_destruct;
- (void)_dataFromCheckingString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 optionsData:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_textCheckingResultsFromData:(id)arg1;
- (id)connection;
- (id)init;
- (bool)isValid;
- (void)recordResponse:(unsigned long long)arg1 toGrammarDetail:(id)arg2 language:(id)arg3 appIdentifier:(id)arg4;
- (void)requestCheckingOfString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setValid:(bool)arg1;

@end
