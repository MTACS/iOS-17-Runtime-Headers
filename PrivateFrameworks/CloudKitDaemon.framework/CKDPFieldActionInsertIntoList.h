
@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying> {
    struct { 
        unsigned int insertAfter : 1; 
    }  _has;
    bool  _insertAfter;
    CKDPListPosition * _position;
    NSMutableArray * _values;
}

@property (nonatomic) bool hasInsertAfter;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic) bool insertAfter;
@property (nonatomic, retain) CKDPListPosition *position;
@property (nonatomic, retain) NSMutableArray *values;

+ (Class)valueType;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInsertAfter;
- (bool)hasPosition;
- (unsigned long long)hash;
- (bool)insertAfter;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (bool)readFrom:(id)arg1;
- (void)setHasInsertAfter:(bool)arg1;
- (void)setInsertAfter:(bool)arg1;
- (void)setPosition:(id)arg1;
- (void)setValues:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
