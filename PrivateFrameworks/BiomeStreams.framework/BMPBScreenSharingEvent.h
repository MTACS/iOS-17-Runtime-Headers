
@interface BMPBScreenSharingEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
        unsigned int isStart : 1; 
    }  _has;
    bool  _isStart;
    int  _type;
}

@property (nonatomic) bool hasIsStart;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isStart;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsStart;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsStart:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsStart:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
