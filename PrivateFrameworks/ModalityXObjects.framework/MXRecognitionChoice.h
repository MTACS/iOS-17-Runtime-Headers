
@interface MXRecognitionChoice : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _alternativeIndexs;
    int  _confidence;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
}

@property (nonatomic, readonly) int*alternativeIndexs;
@property (nonatomic, readonly) unsigned long long alternativeIndexsCount;
@property (nonatomic) int confidence;
@property (nonatomic) bool hasConfidence;

- (void)addAlternativeIndex:(int)arg1;
- (int)alternativeIndexAtIndex:(unsigned long long)arg1;
- (int*)alternativeIndexs;
- (unsigned long long)alternativeIndexsCount;
- (void)clearAlternativeIndexs;
- (int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeIndexs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setConfidence:(int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
