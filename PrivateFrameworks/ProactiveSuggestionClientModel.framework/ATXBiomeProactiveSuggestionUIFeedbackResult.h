
@interface ATXBiomeProactiveSuggestionUIFeedbackResult : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSUUID * _blendingUICacheUpdateUUID;
    NSDate * _clientModelCacheCreationDate;
    NSString * _clientModelId;
    unsigned char  _consumerSubType;
    NSArray * _engagedSuggestions;
    NSArray * _rejectedSuggestions;
    NSDate * _sessionEndDate;
    NSString * _sessionId;
    NSDate * _sessionStartDate;
    NSArray * _shownSuggestions;
    long long  _suggestionExecutableType;
}

@property (nonatomic, readonly) NSUUID *blendingUICacheUpdateUUID;
@property (nonatomic, readonly) NSDate *clientModelCacheCreationDate;
@property (nonatomic, readonly) NSString *clientModelId;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *engagedSuggestions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *rejectedSuggestions;
@property (nonatomic, readonly) NSDate *sessionEndDate;
@property (nonatomic, readonly) NSString *sessionId;
@property (nonatomic, readonly) NSDate *sessionStartDate;
@property (nonatomic, readonly) NSArray *shownSuggestions;
@property (nonatomic, readonly) long long suggestionExecutableType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)blendingUICacheUpdateUUID;
- (id)clientModelCacheCreationDate;
- (id)clientModelId;
- (unsigned char)consumerSubType;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)engagedSuggestions;
- (id)init;
- (id)initWithProactiveSuggestionUIFeedbackResult:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSessionId:(id)arg1 blendingUICacheUpdateUUID:(id)arg2 clientModelId:(id)arg3 clientModelCacheCreationDate:(id)arg4 consumerSubType:(unsigned char)arg5 sessionStartDate:(id)arg6 sessionEndDate:(id)arg7 shownSuggestions:(id)arg8 engagedSuggestions:(id)arg9 rejectedSuggestions:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBiomeProactiveSuggestionUIFeedbackResult:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)rejectedSuggestions;
- (id)serialize;
- (id)sessionEndDate;
- (id)sessionId;
- (id)sessionStartDate;
- (id)shownSuggestions;
- (long long)suggestionExecutableType;

@end
