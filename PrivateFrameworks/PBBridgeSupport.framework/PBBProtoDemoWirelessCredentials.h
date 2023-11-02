
@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying> {
    unsigned int  _companionDemoConfig;
    struct { 
        unsigned int companionDemoConfig : 1; 
    }  _has;
    NSString * _password;
    NSString * _ssid;
}

@property (nonatomic) unsigned int companionDemoConfig;
@property (nonatomic) bool hasCompanionDemoConfig;
@property (nonatomic, readonly) bool hasPassword;
@property (nonatomic, readonly) bool hasSsid;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *ssid;

- (void).cxx_destruct;
- (unsigned int)companionDemoConfig;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompanionDemoConfig;
- (bool)hasPassword;
- (bool)hasSsid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)password;
- (bool)readFrom:(id)arg1;
- (void)setCompanionDemoConfig:(unsigned int)arg1;
- (void)setHasCompanionDemoConfig:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;
- (void)writeTo:(id)arg1;

@end
