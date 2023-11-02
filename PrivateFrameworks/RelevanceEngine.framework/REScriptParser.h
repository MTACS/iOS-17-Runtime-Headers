
@interface REScriptParser : NSObject {
    <REBacktrackingTokenBuffer> * _buffer;
    <REScriptParserDelegate> * _delegate;
}

@property (nonatomic) <REScriptParserDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithBacktrackingBuffer:(id)arg1;
- (id)parse;
- (void)setDelegate:(id)arg1;

@end
