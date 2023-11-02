
@protocol REScriptParserDelegate <NSObject>

@required

- (void)parser:(REScriptParser *)arg1 didEncouterParserError:(NSError *)arg2;

@end
