
@interface _LTSpeechLIDLoggingRequest : NSObject <_LTLoggingRequest> {
    NSString * _conversationID;
    _LTLanguageDetectionResult * _lidResult;
    _LTLocalePair * _localePair;
    NSString * _requestID;
    NSLocale * _selectedLocale;
    NSLocale * _targetLocale;
}

@property (nonatomic, copy) NSString *conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _LTLanguageDetectionResult *lidResult;
@property (nonatomic, copy) _LTLocalePair *localePair;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) NSLocale *selectedLocale;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSLocale *targetLocale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lidResult;
- (id)localePair;
- (id)requestID;
- (id)selectedLocale;
- (void)setConversationID:(id)arg1;
- (void)setLidResult:(id)arg1;
- (void)setLocalePair:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setSelectedLocale:(id)arg1;
- (void)setTargetLocale:(id)arg1;
- (id)targetLocale;

@end
