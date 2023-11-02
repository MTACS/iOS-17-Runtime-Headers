
@interface GEOPDComponent : PBCodable <NSCopying> {
    GEOPDAttribution * _attribution;
    int  _cacheControl;
    NSMutableArray * _commingledAttributions;
    int  _componentId;
    struct { 
        unsigned int has_timestampFirstSeen : 1; 
        unsigned int has_cacheControl : 1; 
        unsigned int has_componentId : 1; 
        unsigned int has_startIndex : 1; 
        unsigned int has_status : 1; 
        unsigned int has_ttl : 1; 
        unsigned int has_type : 1; 
        unsigned int has_valuesAvailable : 1; 
        unsigned int has_version : 1; 
    }  _flags;
    GEOPDSource * _source;
    int  _startIndex;
    int  _status;
    double  _timestampFirstSeen;
    unsigned int  _ttl;
    int  _type;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _values;
    int  _valuesAvailable;
    unsigned int  _version;
    NSMutableArray * _versionDomains;
}

@property (nonatomic) bool hasTimestampFirstSeen;
@property (nonatomic) double timestampFirstSeen;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestampFirstSeen;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestampFirstSeen:(bool)arg1;
- (void)setTimestampFirstSeen:(double)arg1;
- (bool)statusCodeIsValid;
- (double)timestampFirstSeen;
- (void)writeTo:(id)arg1;

@end
