
@interface _ICLLErrorMessage : PBCodable <NSCopying> {
    int  _code;
    int  _contentTypeCode;
    struct { 
        unsigned int code : 1; 
        unsigned int contentTypeCode : 1; 
    }  _has;
    NSString * _message;
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
