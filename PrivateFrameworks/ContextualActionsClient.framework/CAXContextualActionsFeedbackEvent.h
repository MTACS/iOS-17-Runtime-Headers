
@interface CAXContextualActionsFeedbackEvent : NSObject <ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    CAXPredictionContext * _deviceContext;
    CAXContextualAction * _selectedAction;
    NSString * _sessionIdentifier;
    CAXSuggestion * _suggestion;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) CAXPredictionContext *deviceContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CAXContextualAction *selectedAction;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) CAXSuggestion *suggestion;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned int)dataVersion;
- (id)deviceContext;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSelectedAction:(id)arg1 suggestion:(id)arg2 deviceContext:(id)arg3 sessionIdentifier:(id)arg4;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (id)selectedAction;
- (id)serialize;
- (id)sessionIdentifier;
- (void)setDeviceContext:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end
