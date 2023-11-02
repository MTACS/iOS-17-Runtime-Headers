
@protocol TCXPCTextServer

@required

- (void)_xpc_dataFromCheckingGrammarInString:(void *)arg1 language:(void *)arg2 offset:(void *)arg3 optionsData:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, unsigned long long, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)_xpc_dataFromCheckingString:(void *)arg1 language:(void *)arg2 offset:(void *)arg3 optionsData:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, unsigned long long, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)_xpc_recordResponse:(unsigned long long)arg1 toGrammarDetailPropertyListData:(NSData *)arg2 language:(NSString *)arg3 appIdentifier:(NSString *)arg4;

@end
