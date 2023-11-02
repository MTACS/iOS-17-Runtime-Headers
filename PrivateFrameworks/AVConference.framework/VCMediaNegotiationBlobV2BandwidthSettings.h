
@interface VCMediaNegotiationBlobV2BandwidthSettings : PBCodable <NSCopying> {
    unsigned int  _cap2G;
    unsigned int  _cap3G;
    unsigned int  _cap5G;
    unsigned int  _capLTE;
    unsigned int  _capWifi;
    struct { 
        unsigned int cap2G : 1; 
        unsigned int cap3G : 1; 
        unsigned int cap5G : 1; 
        unsigned int capLTE : 1; 
        unsigned int capWifi : 1; 
    }  _has;
}

@property (nonatomic) unsigned int cap2G;
@property (nonatomic) unsigned int cap3G;
@property (nonatomic) unsigned int cap5G;
@property (nonatomic) unsigned int capLTE;
@property (nonatomic) unsigned int capWifi;
@property (nonatomic) bool hasCap2G;
@property (nonatomic) bool hasCap3G;
@property (nonatomic) bool hasCap5G;
@property (nonatomic) bool hasCapLTE;
@property (nonatomic) bool hasCapWifi;

+ (id)filteredSetForOperatingMode:(int)arg1 bandwidthConfigurations:(id)arg2;

- (id)bandwidthConfigurations;
- (unsigned int)cap2G;
- (unsigned int)cap3G;
- (unsigned int)cap5G;
- (unsigned int)capLTE;
- (unsigned int)capWifi;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCap2G;
- (bool)hasCap3G;
- (bool)hasCap5G;
- (bool)hasCapLTE;
- (bool)hasCapWifi;
- (unsigned long long)hash;
- (id)initWithBandwidthConfigurations:(id)arg1;
- (bool)isDefaultSettings;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (void)setCap2G:(unsigned int)arg1;
- (void)setCap3G:(unsigned int)arg1;
- (void)setCap5G:(unsigned int)arg1;
- (void)setCapLTE:(unsigned int)arg1;
- (void)setCapWifi:(unsigned int)arg1;
- (void)setHasCap2G:(bool)arg1;
- (void)setHasCap3G:(bool)arg1;
- (void)setHasCap5G:(bool)arg1;
- (void)setHasCapLTE:(bool)arg1;
- (void)setHasCapWifi:(bool)arg1;
- (void)setupCap2G:(unsigned int)arg1;
- (void)setupCap3G:(unsigned int)arg1;
- (void)setupCap5G:(unsigned int)arg1;
- (bool)setupCapForBandwidthConfiguration:(id)arg1;
- (void)setupCapLTE:(unsigned int)arg1;
- (void)setupCapWifi:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
