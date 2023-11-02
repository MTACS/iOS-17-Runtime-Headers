
@interface GEOPDComponentInfo : PBCodable <NSCopying> {
    unsigned int  _count;
    GEOPDComponentFilter * _filter;
    struct { 
        unsigned int has_count : 1; 
        unsigned int has_startIndex : 1; 
        unsigned int has_type : 1; 
        unsigned int has_urgency : 1; 
        unsigned int has_includeSource : 1; 
    }  _flags;
    bool  _includeSource;
    unsigned int  _startIndex;
    int  _type;
    PBUnknownFields * _unknownFields;
    int  _urgency;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
