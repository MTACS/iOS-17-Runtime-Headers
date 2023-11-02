
@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxChildItems : 1; 
        unsigned int has_maxChildPlaces : 1; 
        unsigned int has_supportChildItems : 1; 
    }  _flags;
    int  _maxChildItems;
    int  _maxChildPlaces;
    bool  _supportChildItems;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedChildActions;
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
