
@interface WFJavaScriptStringRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {
    NSArray * _actionList;
    NSDictionary * _preRuntimeJavaScriptSerializedRepresentation;
    NSString * _preRuntimeJavaScriptString;
    NSString * _runtimeJavaScriptString;
    unsigned long long  _runtimeType;
    NSURL * _targetURL;
}

@property (nonatomic, copy) NSArray *actionList;
@property (nonatomic, readonly) NSDictionary *preRuntimeJavaScriptSerializedRepresentation;
@property (nonatomic, readonly) NSString *preRuntimeJavaScriptString;
@property (nonatomic, copy) NSString *runtimeJavaScriptString;
@property (nonatomic) unsigned long long runtimeType;
@property (nonatomic, retain) NSURL *targetURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)actionList;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedPromptMessage;
- (id)defaultLocalizedPromptTitle;
- (id)initWithWorkflow:(id)arg1 runtimeType:(unsigned long long)arg2 targetURL:(id)arg3 preRuntimeVariableString:(id)arg4 runtimeString:(id)arg5;
- (id)policyFunctionName;
- (id)preRuntimeJavaScriptSerializedRepresentation;
- (id)preRuntimeJavaScriptString;
- (id)runtimeJavaScriptString;
- (unsigned long long)runtimeType;
- (void)setActionList:(id)arg1;
- (void)setRuntimeJavaScriptString:(id)arg1;
- (void)setRuntimeType:(unsigned long long)arg1;
- (void)setTargetURL:(id)arg1;
- (id)targetURL;

@end
