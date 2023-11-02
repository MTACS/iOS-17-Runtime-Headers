
@interface PETRawMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int typeId : 1; 
    }  _has;
    NSString * _name;
    NSData * _rawBytes;
    unsigned int  _typeId;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasRawBytes;
@property (nonatomic) bool hasTypeId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSData *rawBytes;
@property (nonatomic) unsigned int typeId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasRawBytes;
- (bool)hasTypeId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)rawBytes;
- (bool)readFrom:(id)arg1;
- (void)setHasTypeId:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRawBytes:(id)arg1;
- (void)setTypeId:(unsigned int)arg1;
- (unsigned int)typeId;
- (void)writeTo:(id)arg1;

@end
