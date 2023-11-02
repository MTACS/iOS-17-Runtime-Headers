
@interface BLTPBSetRemoteGlobalSpokenSettingEnabledRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int settingDate : 1; 
        unsigned int settingEnabled : 1; 
    }  _has;
    double  _settingDate;
    bool  _settingEnabled;
}

@property (nonatomic) bool hasSettingDate;
@property (nonatomic) bool hasSettingEnabled;
@property (nonatomic) double settingDate;
@property (nonatomic) bool settingEnabled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSettingDate;
- (bool)hasSettingEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSettingDate:(bool)arg1;
- (void)setHasSettingEnabled:(bool)arg1;
- (void)setSettingDate:(double)arg1;
- (void)setSettingEnabled:(bool)arg1;
- (double)settingDate;
- (bool)settingEnabled;
- (void)writeTo:(id)arg1;

@end
