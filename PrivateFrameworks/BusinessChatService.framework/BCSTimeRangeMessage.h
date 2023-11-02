
@interface BCSTimeRangeMessage : PBCodable <NSCopying> {
    bool  _allDay;
    int  _from;
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
        unsigned int allDay : 1; 
    }  _has;
    int  _to;
}

@property (nonatomic) bool allDay;
@property (nonatomic) int from;
@property (nonatomic) bool hasAllDay;
@property (nonatomic) bool hasFrom;
@property (nonatomic) bool hasTo;
@property (nonatomic) int to;

- (bool)allDay;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)from;
- (bool)hasAllDay;
- (bool)hasFrom;
- (bool)hasTo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setFrom:(int)arg1;
- (void)setHasAllDay:(bool)arg1;
- (void)setHasFrom:(bool)arg1;
- (void)setHasTo:(bool)arg1;
- (void)setTo:(int)arg1;
- (int)to;
- (void)writeTo:(id)arg1;

@end
