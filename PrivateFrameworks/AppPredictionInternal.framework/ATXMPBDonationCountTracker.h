
@interface ATXMPBDonationCountTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    int  _actionType;
    unsigned int  _count;
    struct { 
        unsigned int actionType : 1; 
        unsigned int count : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) int actionType;
@property (nonatomic) unsigned int count;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasCount;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (id)abGroup;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasActionType;
- (bool)hasCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
