
@interface ADConfigurationResponse : PBCodable <NSCopying> {
    int  _bannerProxyType;
    NSString * _configVersion;
    struct { 
        unsigned int bannerProxyType : 1; 
    }  _has;
    NSString * _resourceConnectProxyURL;
    NSString * _resourceProxyURL;
    NSMutableArray * _theConfigurations;
}

@property (nonatomic) int bannerProxyType;
@property (nonatomic, retain) NSString *configVersion;
@property (nonatomic) bool hasBannerProxyType;
@property (nonatomic, readonly) bool hasConfigVersion;
@property (nonatomic, readonly) bool hasResourceConnectProxyURL;
@property (nonatomic, readonly) bool hasResourceProxyURL;
@property (nonatomic, retain) NSString *resourceConnectProxyURL;
@property (nonatomic, retain) NSString *resourceProxyURL;
@property (nonatomic, retain) NSMutableArray *theConfigurations;

+ (Class)theConfigurationType;

- (void).cxx_destruct;
- (int)StringAsBannerProxyType:(id)arg1;
- (void)addTheConfiguration:(id)arg1;
- (int)bannerProxyType;
- (id)bannerProxyTypeAsString:(int)arg1;
- (void)clearTheConfigurations;
- (id)configVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBannerProxyType;
- (bool)hasConfigVersion;
- (bool)hasResourceConnectProxyURL;
- (bool)hasResourceProxyURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resourceConnectProxyURL;
- (id)resourceProxyURL;
- (void)setBannerProxyType:(int)arg1;
- (void)setConfigVersion:(id)arg1;
- (void)setHasBannerProxyType:(bool)arg1;
- (void)setResourceConnectProxyURL:(id)arg1;
- (void)setResourceProxyURL:(id)arg1;
- (void)setTheConfigurations:(id)arg1;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;
- (id)theConfigurations;
- (unsigned long long)theConfigurationsCount;
- (void)writeTo:(id)arg1;

@end
