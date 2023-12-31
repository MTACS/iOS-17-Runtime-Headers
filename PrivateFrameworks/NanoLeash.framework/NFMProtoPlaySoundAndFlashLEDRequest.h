
@interface NFMProtoPlaySoundAndFlashLEDRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timeStamp : 1; 
    }  _has;
    double  _timeStamp;
}

@property (nonatomic) bool hasTimeStamp;
@property (nonatomic) double timeStamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeStamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeStamp:(bool)arg1;
- (void)setTimeStamp:(double)arg1;
- (double)timeStamp;
- (void)writeTo:(id)arg1;

@end
