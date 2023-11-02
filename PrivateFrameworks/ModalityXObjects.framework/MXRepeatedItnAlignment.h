
@interface MXRepeatedItnAlignment : PBCodable <NSCopying> {
    NSMutableArray * _itnAlignments;
}

@property (nonatomic, retain) NSMutableArray *itnAlignments;

+ (Class)itnAlignmentType;

- (void).cxx_destruct;
- (void)addItnAlignment:(id)arg1;
- (void)clearItnAlignments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itnAlignmentAtIndex:(unsigned long long)arg1;
- (id)itnAlignments;
- (unsigned long long)itnAlignmentsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setItnAlignments:(id)arg1;
- (void)writeTo:(id)arg1;

@end
