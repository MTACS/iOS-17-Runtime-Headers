
@interface GEOGuidanceImportanceMode : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _guidancePreferenceTypes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*guidancePreferenceTypes;
@property (nonatomic, readonly) unsigned long long guidancePreferenceTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsGuidancePreferenceTypes:(id)arg1;
- (void)addGuidancePreferenceType:(int)arg1;
- (void)clearGuidancePreferenceTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)guidancePreferenceTypeAtIndex:(unsigned long long)arg1;
- (int*)guidancePreferenceTypes;
- (id)guidancePreferenceTypesAsString:(int)arg1;
- (unsigned long long)guidancePreferenceTypesCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGuidancePreferenceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
