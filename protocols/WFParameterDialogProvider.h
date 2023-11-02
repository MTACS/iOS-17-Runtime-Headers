
@protocol WFParameterDialogProvider <NSObject>

@required

- (void)createDialogRequestWithAttribution:(void *)arg1 defaultState:(void *)arg2 prompt:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WFDialogAttribution *, <WFParameterState> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDialogRequest *, void*
- (<WFParameterState> *)parameterStateFromDialogResponse:(WFDialogResponse *)arg1;

@end
