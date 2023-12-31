
@interface NTPBReadingListShow : PBCodable <NSCopying> {
    struct { 
        unsigned int userAction : 1; 
    }  _has;
    int  _userAction;
}

@property (nonatomic) bool hasUserAction;
@property (nonatomic) int userAction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserAction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setUserAction:(int)arg1;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
