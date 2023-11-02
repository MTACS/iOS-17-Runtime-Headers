
@interface CDMTokenizerProtoService : CDMDAGBaseService {
    CDMDataDispatcherContext * _dataDispatcherContext;
    CDMTokenizer * _tokenizer;
}

+ (id)createProtoTokenRequestWithAsrOutputs:(id)arg1 locale:(id)arg2;
+ (id)createProtoTokenRequestWithText:(id)arg1 locale:(id)arg2;
+ (id)tokenChainFromProto:(id)arg1;

- (void).cxx_destruct;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)arg1;

@end
