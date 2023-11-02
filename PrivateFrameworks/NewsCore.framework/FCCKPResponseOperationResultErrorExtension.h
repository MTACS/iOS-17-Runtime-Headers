
@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    NSString * _extensionName;
    NSData * _extensionPayload;
    struct { 
        unsigned int typeCode : 1; 
    }  _has;
    unsigned int  _typeCode;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
