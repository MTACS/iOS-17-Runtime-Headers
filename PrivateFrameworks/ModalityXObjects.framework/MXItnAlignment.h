
@interface MXItnAlignment : PBCodable <NSCopying> {
    int  _firstPostItnCharPos;
    int  _firstPreItnTokenIndex;
    struct { 
        unsigned int firstPostItnCharPos : 1; 
        unsigned int firstPreItnTokenIndex : 1; 
        unsigned int lastPostItnCharPos : 1; 
        unsigned int lastPreItnTokenIndex : 1; 
    }  _has;
    int  _lastPostItnCharPos;
    int  _lastPreItnTokenIndex;
}

@property (nonatomic) int firstPostItnCharPos;
@property (nonatomic) int firstPreItnTokenIndex;
@property (nonatomic) bool hasFirstPostItnCharPos;
@property (nonatomic) bool hasFirstPreItnTokenIndex;
@property (nonatomic) bool hasLastPostItnCharPos;
@property (nonatomic) bool hasLastPreItnTokenIndex;
@property (nonatomic) int lastPostItnCharPos;
@property (nonatomic) int lastPreItnTokenIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)firstPostItnCharPos;
- (int)firstPreItnTokenIndex;
- (bool)hasFirstPostItnCharPos;
- (bool)hasFirstPreItnTokenIndex;
- (bool)hasLastPostItnCharPos;
- (bool)hasLastPreItnTokenIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)lastPostItnCharPos;
- (int)lastPreItnTokenIndex;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFirstPostItnCharPos:(int)arg1;
- (void)setFirstPreItnTokenIndex:(int)arg1;
- (void)setHasFirstPostItnCharPos:(bool)arg1;
- (void)setHasFirstPreItnTokenIndex:(bool)arg1;
- (void)setHasLastPostItnCharPos:(bool)arg1;
- (void)setHasLastPreItnTokenIndex:(bool)arg1;
- (void)setLastPostItnCharPos:(int)arg1;
- (void)setLastPreItnTokenIndex:(int)arg1;
- (void)writeTo:(id)arg1;

@end
