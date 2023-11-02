
@interface WiFiAnalyticsAWDWiFiNWActivityStateBin : PBCodable <NSCopying> {
    struct { 
        unsigned int residentTime : 1; 
    }  _has;
    unsigned long long  _residentTime;
    NSString * _state;
}

@property (nonatomic) bool hasResidentTime;
@property (nonatomic, readonly) bool hasState;
@property (nonatomic) unsigned long long residentTime;
@property (nonatomic, retain) NSString *state;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResidentTime;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)residentTime;
- (void)setHasResidentTime:(bool)arg1;
- (void)setResidentTime:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)writeTo:(id)arg1;

@end
