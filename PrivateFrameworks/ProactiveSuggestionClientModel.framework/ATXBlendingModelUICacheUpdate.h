
@interface ATXBlendingModelUICacheUpdate : NSObject <ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    double  _absoluteCacheCreationDate;
    NSDictionary * _clientModelCacheUpdateUUIDs;
    unsigned char  _consumerSubType;
    <ATXUICacheProtocol> * _uiCache;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSDate *cacheCreationDate;
@property (nonatomic, readonly) NSDictionary *clientModelCacheUpdateUUIDs;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ATXUICacheProtocol> *uiCache;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCoder:(id)arg1;
- (id)cacheCreationDate;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForint:(int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)clientModelCacheUpdateUUIDs;
- (id)clientModelCacheUpdateUUIDsDictionaryFromProto:(id)arg1;
- (id)clientModelCacheUpdateUUIDsFromCacheUpdates:(id)arg1;
- (unsigned char)consumerSubType;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)encodeAsProtoForBiome;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeScreenCachedSuggestions:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdates:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSpotlightSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdates:(id)arg3;
- (id)initWithSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdates:(id)arg3;
- (id)initWithUICache:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdateUUIDs:(id)arg3 uuid:(id)arg4 cacheCreationDate:(id)arg5;
- (id)initWithUICache:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdates:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBlendingModelUICacheUpdate:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (id)protoForBiome;
- (id)serialize;
- (void)setClientModelCacheUpdateUUIDsDictionaryOnProto:(id)arg1;
- (void)setUICacheObjectOnProto:(id)arg1;
- (void)setUICacheObjectOnProtoForBiome:(id)arg1;
- (id)uiCache;
- (id)uuid;

@end
