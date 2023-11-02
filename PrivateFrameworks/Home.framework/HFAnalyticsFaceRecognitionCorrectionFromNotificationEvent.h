
@interface HFAnalyticsFaceRecognitionCorrectionFromNotificationEvent : HFAnalyticsEvent {
    NSNumber * _errorCode;
    NSString * _errorDomain;
}

@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSString *errorDomain;

- (void).cxx_destruct;
- (id)errorCode;
- (id)errorDomain;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;

@end
