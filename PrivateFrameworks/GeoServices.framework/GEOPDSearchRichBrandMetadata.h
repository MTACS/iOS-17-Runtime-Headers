
@interface GEOPDSearchRichBrandMetadata : PBCodable <NSCopying> {
    GEOPDSearchBrandDensity * _brandDensity;
    NSMutableArray * _brandRelationshipInfos;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int read_brandDensity : 1; 
        unsigned int read_brandRelationshipInfos : 1; 
        unsigned int read_preferredCategorys : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _muid;
    NSMutableArray * _preferredCategorys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
