
@interface GEOPDResultRefinementMultiSelect : PBCodable <NSCopying> {
    int  _clauseType;
    NSString * _displayName;
    NSString * _displayNameForMultiSelected;
    struct { 
        unsigned int has_clauseType : 1; 
        unsigned int has_maxNumSelectElements : 1; 
        unsigned int has_showEqualWidthButtonsOnFilterView : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayNameForMultiSelected : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_multiSelectIdentifier : 1; 
        unsigned int read_multiSelects : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _maxNumSelectElements;
    NSString * _multiSelectIdentifier;
    NSMutableArray * _multiSelects;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _showEqualWidthButtonsOnFilterView;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
