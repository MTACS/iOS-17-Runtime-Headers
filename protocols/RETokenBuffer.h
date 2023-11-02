
@protocol RETokenBuffer <NSObject>

@required

- (REScriptToken *)currentToken;
- (bool)isEmpty;
- (void)next;

@end
