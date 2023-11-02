
@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryIndexs;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int has_dayOfWeek : 1; 
        unsigned int has_hourOfDay : 1; 
    }  _flags;
    unsigned int  _hourOfDay;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
