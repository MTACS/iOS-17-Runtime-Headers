
@interface CKDPListPosition : PBCodable <NSCopying> {
    struct { 
        unsigned int index : 1; 
        unsigned int isReversed : 1; 
    }  _has;
    int  _index;
    bool  _isReversed;
}

@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasIsReversed;
@property (nonatomic) int index;
@property (nonatomic) bool isReversed;

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasIsReversed;
- (unsigned long long)hash;
- (int)index;
- (bool)isEqual:(id)arg1;
- (bool)isReversed;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasIsReversed:(bool)arg1;
- (void)setIndex:(int)arg1;
- (void)setIsReversed:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
