
@interface TCTextServer : NSObject <TCXPCTextServer>

+ (id)validatedDetailDictionaryForDictionary:(id)arg1;
+ (id)validatedOptionsDictionaryForDictionary:(id)arg1;
+ (id)validatedOptionsDictionaryForOptionsData:(id)arg1 editorTypes:(id)arg2;

- (void)_checkString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_xpc_dataFromCheckingGrammarInString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 optionsData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_xpc_dataFromCheckingString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 optionsData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_xpc_recordResponse:(unsigned long long)arg1 toGrammarDetailPropertyListData:(id)arg2 language:(id)arg3 appIdentifier:(id)arg4;
- (void)prewarmEditor;

@end
