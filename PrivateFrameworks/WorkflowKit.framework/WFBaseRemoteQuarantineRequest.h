
@interface WFBaseRemoteQuarantineRequest : MTLModel <MTLJSONSerializing, WFRemoteQuarantineRequest> {
    NSString * _appVersion;
    NSString * _osVersion;
    NSString * _userLocale;
}

@property (nonatomic, readonly) NSString *appVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultLocalizedDeniedErrorMessage;
@property (nonatomic, readonly) NSString *defaultLocalizedDeniedErrorTitle;
@property (nonatomic, readonly) NSString *defaultLocalizedPromptMessage;
@property (nonatomic, readonly) NSString *defaultLocalizedPromptTitle;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *policyFunctionName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userLocale;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)appVersion;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedPromptMessage;
- (id)defaultLocalizedPromptTitle;
- (id)init;
- (id)javaScriptCoreRepresentationWithError:(id*)arg1;
- (id)osVersion;
- (id)policyFunctionName;
- (id)userLocale;

@end
