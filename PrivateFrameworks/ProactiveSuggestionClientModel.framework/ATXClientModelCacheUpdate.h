
@interface ATXClientModelCacheUpdate : NSObject <ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    double  _absoluteCacheCreationDate;
    NSString * _clientModelId;
    NSData * _feedbackMetadata;
    ATXSuggestionRequestResponse * _suggestionRequestResponse;
    NSArray * _suggestions;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSDate *cacheCreationDate;
@property (nonatomic, readonly) NSString *clientModelId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *feedbackMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXSuggestionRequestResponse *suggestionRequestResponse;
@property (nonatomic, readonly) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_clientModelFromClientModelId:(id)arg1 suggestions:(id)arg2;
- (id)cacheCreationDate;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)clientModelId;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackMetadata;
- (id)init;
- (id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 feedbackMetadata:(id)arg3 responseForRealTimeRequest:(id)arg4;
- (id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 feedbackMetadata:(id)arg3 responseForRealTimeRequest:(id)arg4 uuid:(id)arg5 cacheCreationDate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXClientModelCacheUpdate:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (id)serialize;
- (void)setFeedbackMetadata:(id)arg1;
- (id)suggestionRequestResponse;
- (id)suggestions;
- (id)uuid;

@end
