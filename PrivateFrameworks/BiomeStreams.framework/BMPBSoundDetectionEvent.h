
@interface BMPBSoundDetectionEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _name;
    NSString * _soundDetectionType;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSoundDetectionType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *soundDetectionType;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasName;
- (bool)hasSoundDetectionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSoundDetectionType:(id)arg1;
- (id)soundDetectionType;
- (void)writeTo:(id)arg1;

@end
