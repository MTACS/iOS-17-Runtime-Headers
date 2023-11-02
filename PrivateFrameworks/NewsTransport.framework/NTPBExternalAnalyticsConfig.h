
@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {
    NSString * _analyticsBaseUrl;
    NSString * _analyticsId;
    NSString * _eventQueryParameterName;
    struct { 
        unsigned int usesProxyProfile : 1; 
    }  _has;
    NSMutableArray * _proxyHostNames;
    NSMutableArray * _queryParameterConfigs;
    bool  _usesProxyProfile;
    NSMutableArray * _vpnProfileNames;
}

@property (nonatomic, retain) NSString *analyticsBaseUrl;
@property (nonatomic, retain) NSString *analyticsId;
@property (nonatomic, retain) NSString *eventQueryParameterName;
@property (nonatomic, readonly) bool hasAnalyticsBaseUrl;
@property (nonatomic, readonly) bool hasAnalyticsId;
@property (nonatomic, readonly) bool hasEventQueryParameterName;
@property (nonatomic) bool hasUsesProxyProfile;
@property (nonatomic, retain) NSMutableArray *proxyHostNames;
@property (nonatomic, retain) NSMutableArray *queryParameterConfigs;
@property (nonatomic) bool usesProxyProfile;
@property (nonatomic, retain) NSMutableArray *vpnProfileNames;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
+ (Class)vpnProfileNamesType;

- (void).cxx_destruct;
- (void)addProxyHostNames:(id)arg1;
- (void)addQueryParameterConfig:(id)arg1;
- (void)addVpnProfileNames:(id)arg1;
- (id)analyticsBaseUrl;
- (id)analyticsId;
- (void)clearProxyHostNames;
- (void)clearQueryParameterConfigs;
- (void)clearVpnProfileNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventQueryParameterName;
- (bool)hasAnalyticsBaseUrl;
- (bool)hasAnalyticsId;
- (bool)hasEventQueryParameterName;
- (bool)hasUsesProxyProfile;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proxyHostNames;
- (id)proxyHostNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)proxyHostNamesCount;
- (id)queryParameterConfigAtIndex:(unsigned long long)arg1;
- (id)queryParameterConfigs;
- (unsigned long long)queryParameterConfigsCount;
- (bool)readFrom:(id)arg1;
- (void)setAnalyticsBaseUrl:(id)arg1;
- (void)setAnalyticsId:(id)arg1;
- (void)setEventQueryParameterName:(id)arg1;
- (void)setHasUsesProxyProfile:(bool)arg1;
- (void)setProxyHostNames:(id)arg1;
- (void)setQueryParameterConfigs:(id)arg1;
- (void)setUsesProxyProfile:(bool)arg1;
- (void)setVpnProfileNames:(id)arg1;
- (bool)usesProxyProfile;
- (id)vpnProfileNames;
- (id)vpnProfileNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)vpnProfileNamesCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)externalAnalyticsConfigWithDictionary:(id)arg1;

@end
