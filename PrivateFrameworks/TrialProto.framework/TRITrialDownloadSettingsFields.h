
@interface TRITrialDownloadSettingsFields : PBCodable <NSCopying> {
    bool  _allowAnyNetworking;
    bool  _allowBattery;
    int  _discretionaryBehavior;
    struct { 
        unsigned int discretionaryBehavior : 1; 
        unsigned int allowAnyNetworking : 1; 
        unsigned int allowBattery : 1; 
    }  _has;
}

@property (nonatomic) bool allowAnyNetworking;
@property (nonatomic) bool allowBattery;
@property (nonatomic) int discretionaryBehavior;
@property (nonatomic) bool hasAllowAnyNetworking;
@property (nonatomic) bool hasAllowBattery;
@property (nonatomic) bool hasDiscretionaryBehavior;

- (int)StringAsDiscretionaryBehavior:(id)arg1;
- (bool)allowAnyNetworking;
- (bool)allowBattery;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discretionaryBehavior;
- (id)discretionaryBehaviorAsString:(int)arg1;
- (bool)hasAllowAnyNetworking;
- (bool)hasAllowBattery;
- (bool)hasDiscretionaryBehavior;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllowAnyNetworking:(bool)arg1;
- (void)setAllowBattery:(bool)arg1;
- (void)setDiscretionaryBehavior:(int)arg1;
- (void)setHasAllowAnyNetworking:(bool)arg1;
- (void)setHasAllowBattery:(bool)arg1;
- (void)setHasDiscretionaryBehavior:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
