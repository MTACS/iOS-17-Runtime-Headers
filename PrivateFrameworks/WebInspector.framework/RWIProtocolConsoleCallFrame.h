
@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic) int columnNumber;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) int lineNumber;
@property (nonatomic, copy) NSString *scriptId;
@property (nonatomic, copy) NSString *url;

- (int)columnNumber;
- (id)functionName;
- (id)initWithFunctionName:(id)arg1 url:(id)arg2 scriptId:(id)arg3 lineNumber:(int)arg4 columnNumber:(int)arg5;
- (int)lineNumber;
- (id)scriptId;
- (void)setColumnNumber:(int)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setLineNumber:(int)arg1;
- (void)setScriptId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
