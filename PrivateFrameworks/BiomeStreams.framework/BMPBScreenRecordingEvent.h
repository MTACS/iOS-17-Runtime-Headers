
@interface BMPBScreenRecordingEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int isStart : 1; 
    }  _has;
    bool  _isStart;
}

@property (nonatomic) bool hasIsStart;
@property (nonatomic) bool isStart;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsStart:(bool)arg1;
- (void)setIsStart:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
