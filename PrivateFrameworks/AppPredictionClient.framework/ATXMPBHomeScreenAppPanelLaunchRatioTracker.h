
@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying> {
    struct { 
        unsigned int location : 1; 
        unsigned int ratioType : 1; 
    }  _has;
    int  _location;
    int  _ratioType;
}

@property (nonatomic) bool hasLocation;
@property (nonatomic) bool hasRatioType;
@property (nonatomic) int location;
@property (nonatomic) int ratioType;

- (int)StringAsLocation:(id)arg1;
- (int)StringAsRatioType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocation;
- (bool)hasRatioType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)location;
- (id)locationAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)ratioType;
- (id)ratioTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasRatioType:(bool)arg1;
- (void)setLocation:(int)arg1;
- (void)setRatioType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
