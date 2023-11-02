
@interface REScriptProcessor : NSObject <REScriptParserDelegate, REScriptTokenizerDelegate> {
    <REScriptBuffer> * _buffer;
    REScriptParser * _parser;
    NSString * _path;
    REScriptSymbolTable * _table;
    <REBacktrackingTokenBuffer> * _tokenStack;
    REScriptTokenizer * _tokenizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedSystemTable;
+ (id)processorWithPath:(id)arg1;
+ (id)processorWithSource:(id)arg1;

- (void).cxx_destruct;
- (void)_encounteredError:(id)arg1;
- (void)_process;
- (id)features;
- (id)featuresWithNames:(id)arg1;
- (id)initWithScriptBuffer:(id)arg1 path:(id)arg2;
- (void)parser:(id)arg1 didEncouterParserError:(id)arg2;
- (id)rules;
- (id)rulesWithNames:(id)arg1;
- (void)tokenizer:(id)arg1 didEncouterTokenError:(id)arg2;

@end
