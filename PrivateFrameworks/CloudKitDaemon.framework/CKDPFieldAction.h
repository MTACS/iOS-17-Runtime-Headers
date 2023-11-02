
@interface CKDPFieldAction : PBCodable <NSCopying> {
    CKDPFieldActionDeleteListRange * _deleteListRange;
    CKDPFieldActionInsertIntoList * _insertIntoList;
    CKDPFieldActionReplaceListRange * _replaceListRange;
}

@property (nonatomic, retain) CKDPFieldActionDeleteListRange *deleteListRange;
@property (nonatomic, readonly) bool hasDeleteListRange;
@property (nonatomic, readonly) bool hasInsertIntoList;
@property (nonatomic, readonly) bool hasReplaceListRange;
@property (nonatomic, retain) CKDPFieldActionInsertIntoList *insertIntoList;
@property (nonatomic, retain) CKDPFieldActionReplaceListRange *replaceListRange;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteListRange;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeleteListRange;
- (bool)hasInsertIntoList;
- (bool)hasReplaceListRange;
- (unsigned long long)hash;
- (id)insertIntoList;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)replaceListRange;
- (void)setDeleteListRange:(id)arg1;
- (void)setInsertIntoList:(id)arg1;
- (void)setReplaceListRange:(id)arg1;
- (void)writeTo:(id)arg1;

@end
