
@interface CKDPResponseOperationHeader : PBCodable <NSCopying> {
    NSMutableArray * _assetAuthorizationResponses;
    NSMutableArray * _throttleConfigs;
}

@property (nonatomic, retain) NSMutableArray *assetAuthorizationResponses;
@property (nonatomic, retain) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

- (void).cxx_destruct;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (void)addThrottleConfig:(id)arg1;
- (id)assetAuthorizationResponses;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;
- (void)clearThrottleConfigs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssetAuthorizationResponses:(id)arg1;
- (void)setThrottleConfigs:(id)arg1;
- (id)throttleConfigAtIndex:(unsigned long long)arg1;
- (id)throttleConfigs;
- (unsigned long long)throttleConfigsCount;
- (void)writeTo:(id)arg1;

@end
