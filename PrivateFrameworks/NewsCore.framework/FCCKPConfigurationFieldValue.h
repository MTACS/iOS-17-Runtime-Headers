
@interface FCCKPConfigurationFieldValue : PBCodable <NSCopying> {
    bool  _boolValue;
    NSData * _bytesValue;
    double  _doubleValue;
    NSMutableArray * _fieldValues;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int longValue : 1; 
        unsigned int type : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    NSMutableArray * _listValues;
    long long  _longValue;
    NSString * _stringValue;
    int  _type;
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
