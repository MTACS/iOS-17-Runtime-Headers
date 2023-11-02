
@interface RETokenStack : NSObject <REBacktrackingTokenBuffer> {
    <RETokenBuffer> * _buffer;
    unsigned long long  _position;
    NSMutableArray * _positionStack;
    NSMutableArray * _tokenStack;
}

@property (nonatomic, readonly) REScriptToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)consume;
- (id)currentToken;
- (id)initWithTokenBuffer:(id)arg1;
- (bool)isEmpty;
- (void)next;
- (void)pop;
- (void)push;

@end
