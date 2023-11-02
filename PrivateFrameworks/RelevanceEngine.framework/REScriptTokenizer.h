
@interface REScriptTokenizer : NSObject <RETokenBuffer> {
    <REScriptBuffer> * _buffer;
    unsigned long long  _column;
    REScriptToken * _currentToken;
    <REScriptTokenizerDelegate> * _delegate;
    unsigned long long  _line;
}

@property (nonatomic, readonly) REScriptToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REScriptTokenizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_consumeWhitespace;
- (bool)_hasChar;
- (bool)_matchTokenStart:(int (*)arg1 body:(int (*)arg2 value:(id*)arg3;
- (unsigned short)_peekChar;
- (void)_popChar;
- (id)_readMultilineComment;
- (id)_readSingleComment;
- (id)_readString;
- (void)_validateToken;
- (id)currentToken;
- (id)delegate;
- (id)initWithScriptBuffer:(id)arg1;
- (bool)isEmpty;
- (void)next;
- (void)setDelegate:(id)arg1;

@end
