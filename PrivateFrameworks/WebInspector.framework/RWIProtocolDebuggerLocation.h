
@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (nonatomic) int columnNumber;
@property (nonatomic) int lineNumber;
@property (nonatomic, copy) NSString *scriptId;

- (int)columnNumber;
- (id)initWithScriptId:(id)arg1 lineNumber:(int)arg2;
- (int)lineNumber;
- (id)scriptId;
- (void)setColumnNumber:(int)arg1;
- (void)setLineNumber:(int)arg1;
- (void)setScriptId:(id)arg1;

@end
