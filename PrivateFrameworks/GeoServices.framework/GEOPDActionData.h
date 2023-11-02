
@interface GEOPDActionData : PBCodable <NSCopying> {
    NSMutableArray * _actionLinks;
    NSString * _actionSymbolImageName;
    NSMutableArray * _actionTitles;
    NSString * _categoryId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_actionLinks : 1; 
        unsigned int read_actionSymbolImageName : 1; 
        unsigned int read_actionTitles : 1; 
        unsigned int read_categoryId : 1; 
        unsigned int read_ownerAdamId : 1; 
        unsigned int read_winningAdamId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _ownerAdamId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSString * _winningAdamId;
}

- (void).cxx_destruct;
- (id)actionName;
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
