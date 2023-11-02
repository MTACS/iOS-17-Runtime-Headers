
@interface ATXPBInfoEngineCachedSuggestions : PBCodable <NSCopying> {
    NSMutableArray * _cachedSuggestionIds;
    NSMutableArray * _cachedSuggestionSourceIds;
    struct { 
        unsigned int length : 1; 
    }  _has;
    unsigned long long  _length;
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
