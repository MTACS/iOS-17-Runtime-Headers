
@protocol WFRemoteQuarantineRequest <NSObject>

@required

- (NSString *)defaultLocalizedDeniedErrorMessage;
- (NSString *)defaultLocalizedDeniedErrorTitle;
- (NSString *)defaultLocalizedPromptMessage;
- (NSString *)defaultLocalizedPromptTitle;
- (NSDictionary *)javaScriptCoreRepresentationWithError:(id*)arg1;
- (NSString *)policyFunctionName;

@end
