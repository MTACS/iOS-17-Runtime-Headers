
@protocol WFSequentialParameterInputProviderDelegate <NSObject>

@required

- (void)sequentialParameterInputProvider:(void *)arg1 didAdvanceToParameter:(void *)arg2 action:(void *)arg3 defaultState:(void *)arg4 prompt:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: WFSequentialParameterInputProvider *, WFParameter *, WFAction *, <WFParameterState> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, <WFParameterState> *, void*
- (void)sequentialParameterInputProvider:(WFSequentialParameterInputProvider *)arg1 didFinishWithInputtedStates:(NSDictionary *)arg2;
- (void)sequentialParameterInputProviderDidCancel:(WFSequentialParameterInputProvider *)arg1;

@end
