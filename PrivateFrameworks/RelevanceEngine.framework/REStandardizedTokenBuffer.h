
@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer> {
    <RETokenBuffer> * _buffer;
}

@property (nonatomic, readonly) REScriptToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanTokens;
- (id)currentToken;
- (id)initWithTokenBuffer:(id)arg1;
- (bool)isEmpty;
- (void)next;

@end
