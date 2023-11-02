
@interface GEOPBOfflineServiceMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int has_startTimeMs : 1; 
        unsigned int has_stopTimeMs : 1; 
        unsigned int has_serviceId : 1; 
    }  _flags;
    int  _serviceId;
    unsigned long long  _startTimeMs;
    unsigned long long  _stopTimeMs;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
