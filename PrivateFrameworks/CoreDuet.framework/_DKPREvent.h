
@interface _DKPREvent : PBCodable <NSCopying> {
    long long  _compatibilityVersion;
    double  _confidence;
    double  _creationDate;
    double  _endDate;
    struct { 
        unsigned int compatibilityVersion : 1; 
        unsigned int confidence : 1; 
        unsigned int creationDate : 1; 
        unsigned int timeZone : 1; 
    }  _has;
    NSString * _identifier;
    NSMutableArray * _metadatas;
    _DKPRSource * _source;
    double  _startDate;
    _DKPRStream * _stream;
    long long  _timeZone;
    _DKPRValue * _value;
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
