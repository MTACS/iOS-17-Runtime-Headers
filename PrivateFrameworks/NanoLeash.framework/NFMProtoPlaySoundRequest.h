
@interface NFMProtoPlaySoundRequest : PBRequest <NSCopying> {
    int  _behaviorOverride;
    struct { 
        unsigned int timeStamp : 1; 
        unsigned int behaviorOverride : 1; 
    }  _has;
    double  _timeStamp;
}

@property (nonatomic) int behaviorOverride;
@property (nonatomic) bool hasBehaviorOverride;
@property (nonatomic) bool hasTimeStamp;
@property (nonatomic) double timeStamp;

- (int)behaviorOverride;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBehaviorOverride;
- (bool)hasTimeStamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBehaviorOverride:(int)arg1;
- (void)setHasBehaviorOverride:(bool)arg1;
- (void)setHasTimeStamp:(bool)arg1;
- (void)setTimeStamp:(double)arg1;
- (double)timeStamp;
- (void)writeTo:(id)arg1;

@end
