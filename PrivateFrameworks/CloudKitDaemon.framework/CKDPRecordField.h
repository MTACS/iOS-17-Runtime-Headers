
@interface CKDPRecordField : PBCodable <NSCopying> {
    NSMutableArray * _actions;
    CKDPRecordFieldIdentifier * _identifier;
    CKDPRecordFieldValue * _value;
}

@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *identifier;
@property (nonatomic, retain) CKDPRecordFieldValue *value;

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)arg1;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (id)actionAtIndex:(unsigned long long)arg1;
- (id)actions;
- (unsigned long long)actionsCount;
- (void)addAction:(id)arg1;
- (void)clearActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
