
@interface DRSRapidCloudKitHelper : NSObject {
    DiagnosticPipelineRapidServiceFunctionsClientObjc * _objcClient;
}

@property (nonatomic, readonly) DiagnosticPipelineRapidServiceFunctionsClientObjc *objcClient;

+ (id)devHelper;
+ (id)prodHelper;

- (void).cxx_destruct;
- (id)_initWithEnvironment:(long long)arg1;
- (id)objcClient;
- (void)submitRapidPayload:(id)arg1 replyHandler:(id /* block */)arg2;

@end
