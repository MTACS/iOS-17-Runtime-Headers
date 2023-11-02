
@interface CoreODI.ODISessionInternal : SwiftNativeNSObject {
    void $__lazy_storage_$__bindingsManager;
    void $__lazy_storage_$_fallbackFields;
    void CORE_ODI_BAA_CERT_MAX_TIME;
    void CORE_ODI_MAX_INIT_TIME;
    void CORE_ODI_MAX_WAIT_TIME;
    void CORE_ODI_MIN_WAIT_TIME;
    void CORE_ODI_RAW_WAIT_TIME;
    void CORE_ODI_SEND_OTD_AFTER_SECONDS_IF_NO_ASSESSMENT;
    void _armandDataFiller;
    void _dsidType;
    void _lastAssessmentTimedOut;
    void _locationBundle;
    void _locationBundleIdentifier;
    void _odnAtorSessionId;
    void _odnator;
    void _pendingFeedback;
    void _serviceIdentifier;
    void authorizedDsidTypes;
    void authorizedServices;
    void cacheDeviceFieldsTask;
    void cachedFields;
    void logger;
    void profileDeviceDataFields;
    void sessionIdentifier;
    void sessionState;
    void setODNAtorTask;
}

@property (nonatomic, readonly) NSString *description;

- (id)description;
- (void)getAssessment:(id /* block */)arg1;
- (id)init;
- (id)initWithServiceIdentifier:(id)arg1 forDSIDType:(unsigned long long)arg2 locationBundle:(id)arg3 andLocationBundleIdentifier:(id)arg4;
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)arg1;
- (void)updateWithAdditionalAttributes:(id)arg1;

@end
