
@protocol WFActionParameterInputProvider <NSObject>

@required

- (bool)action:(WFAction *)arg1 canProvideInputForParameter:(WFParameter *)arg2;
- (void)action:(void *)arg1 provideInputForParameters:(void *)arg2 withDefaultStates:(void *)arg3 prompts:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WFAction *, NSOrderedSet *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
