
@interface GEOSharedNavSenderInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_fromDisplayName : 1; 
        unsigned int read_fromIdentifier : 1; 
        unsigned int read_localContactIdentifier : 1; 
        unsigned int read_localName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _fromDisplayName;
    NSString * _fromIdentifier;
    NSString * _localContactIdentifier;
    NSString * _localName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *fromDisplayName;
@property (nonatomic, retain) NSString *fromIdentifier;
@property (nonatomic, readonly) bool hasFromDisplayName;
@property (nonatomic, readonly) bool hasFromIdentifier;
@property (nonatomic, readonly) bool hasLocalContactIdentifier;
@property (nonatomic, readonly) bool hasLocalName;
@property (nonatomic, retain) NSString *localContactIdentifier;
@property (nonatomic, retain) NSString *localName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fromDisplayName;
- (id)fromIdentifier;
- (bool)hasFromDisplayName;
- (bool)hasFromIdentifier;
- (bool)hasLocalContactIdentifier;
- (bool)hasLocalName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localContactIdentifier;
- (id)localName;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFromDisplayName:(id)arg1;
- (void)setFromIdentifier:(id)arg1;
- (void)setLocalContactIdentifier:(id)arg1;
- (void)setLocalName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
