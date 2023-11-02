
@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {
    bool  _enablePartialClientization;
    struct { 
        unsigned int has_resultProviderId : 1; 
        unsigned int has_enablePartialClientization : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_muids : 1; 
        unsigned int read_identifiers : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _identifiers;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _muids;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *identifiers;

+ (Class)identifierType;

- (void).cxx_destruct;
- (void)addIdentifier:(id)arg1;
- (void)clearIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)identifiers;
- (unsigned long long)identifiersCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
