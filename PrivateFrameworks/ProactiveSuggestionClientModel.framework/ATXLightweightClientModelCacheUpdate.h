
@interface ATXLightweightClientModelCacheUpdate : NSObject <ATXPredictionCacheProtocol, ATXProtoBufWrapper, BMStoreData> {
    NSDate * _cacheCreationDate;
    NSString * _clientModelId;
    NSArray * _suggestions;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSDate *cacheCreationDate;
@property (nonatomic, readonly) NSString *clientModelId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)cacheCreationDate;
- (id)clientModelId;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (id)initWithClientModelCacheUpdate:(id)arg1;
- (id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 uuid:(id)arg3 cacheCreationDate:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXLightweightClientModelCacheUpdate:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)serialize;
- (id)suggestions;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (long long)confidenceCategoryForPredictionAtIndex:(unsigned long long)arg1;
- (id)date;
- (id)identifierForPredictionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPredictionsWithConfidence:(long long)arg1;

@end
