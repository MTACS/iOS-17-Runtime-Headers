
@interface CKDPRequestedFields : PBCodable <NSCopying> {
    NSMutableArray * _fields;
    NSMutableArray * _listFields;
}

@property (nonatomic, retain) NSMutableArray *fields;
@property (nonatomic, retain) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)addFields:(id)arg1;
- (void)addListField:(id)arg1;
- (void)clearFields;
- (void)clearListFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)listFieldAtIndex:(unsigned long long)arg1;
- (id)listFields;
- (unsigned long long)listFieldsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setListFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end
