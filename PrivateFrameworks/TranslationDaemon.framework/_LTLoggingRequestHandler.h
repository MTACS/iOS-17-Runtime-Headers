
@interface _LTLoggingRequestHandler : NSObject <FTBatchTranslationResponseDelegate, FTSpeechTranslationResponseDelegate> {
    FTBlazarService * _mtAppService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FTBlazarService *mtAppService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)combineFeedbackCategory:(long long)arg1 andErrors:(id)arg2;
- (id)mtAppService;
- (void)startLoggingRequest:(id)arg1;
- (void)startSafariFeedbackRequest:(id)arg1;
- (void)startSafariLatencyLoggingRequest:(id)arg1;
- (void)startSpeechLIDRequest:(id)arg1;
- (void)startSpeechSensesLoggingRequest:(id)arg1;
- (void)streamDidReceiveBatchTranslationStreamingResponse:(id)arg1;
- (void)streamDidReceiveSpeechTranslationStreamingResponse:(id)arg1;
- (void)streamFailVerifyBatchTranslationStreamingResponse:(id)arg1;
- (void)streamFailVerifySpeechTranslationStreamingResponse:(id)arg1;

@end
