
@protocol MEMessageActionHandler <NSObject>

@required

- (void)decideActionForMessage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MEMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MEMessageActionDecision *, void*

@optional

- (NSArray *)requiredHeaders;

@end
