
@interface DiagnosticPipelineRapidServiceFunctionsClientObjc : NSObject {
    void client;
    void container;
    void environment;
}

@property (nonatomic, readonly) long long environment;

- (void).cxx_destruct;
- (long long)environment;
- (id)init;
- (id)initWithEnvironment:(long long)arg1;
- (void)submitRapidPayloadWithBuildVariant:(id)arg1 deviceCategory:(id)arg2 deviceModel:(id)arg3 platform:(id)arg4 teamID:(id)arg5 issueCategory:(id)arg6 contextDictionaryData:(id)arg7 requestTime:(unsigned long long)arg8 build:(id)arg9 logType:(id)arg10 logSize:(unsigned long long)arg11 fileName:(id)arg12 uploadAttempts:(unsigned int)arg13 payload:(id)arg14 completionHandler:(id /* block */)arg15;

@end
