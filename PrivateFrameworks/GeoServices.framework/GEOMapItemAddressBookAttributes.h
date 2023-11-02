
@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {
    NSString * _addressIdentifier;
    int  _addressType;
    NSString * _contactIdentifier;
    struct { 
        unsigned int has_addressType : 1; 
        unsigned int has_isMe : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressIdentifier : 1; 
        unsigned int read_contactIdentifier : 1; 
        unsigned int read_name : 1; 
        unsigned int read_spokenName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isMe;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _spokenName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *addressIdentifier;
@property (nonatomic) int addressType;
@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, readonly) bool hasAddressIdentifier;
@property (nonatomic) bool hasAddressType;
@property (nonatomic, readonly) bool hasContactIdentifier;
@property (nonatomic) bool hasIsMe;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSpokenName;
@property (nonatomic) bool isMe;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *spokenName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddressType:(id)arg1;
- (id)addressIdentifier;
- (int)addressType;
- (id)addressTypeAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)contactIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressIdentifier;
- (bool)hasAddressType;
- (bool)hasContactIdentifier;
- (bool)hasIsMe;
- (bool)hasName;
- (bool)hasSpokenName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressIdentifier:(id)arg1;
- (void)setAddressType:(int)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setHasAddressType:(bool)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (id)spokenName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
