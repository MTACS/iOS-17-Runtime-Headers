
@interface GEOActionButtonDetail : PBCodable <NSCopying> {
    NSString * _category;
    bool  _dropDown;
    struct { 
        unsigned int has_linkType : 1; 
        unsigned int has_dropDown : 1; 
        unsigned int read_category : 1; 
        unsigned int read_providerId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _linkType;
    NSString * _providerId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic) bool dropDown;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasDropDown;
@property (nonatomic) bool hasLinkType;
@property (nonatomic, readonly) bool hasProviderId;
@property (nonatomic) int linkType;
@property (nonatomic, retain) NSString *providerId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLinkType:(id)arg1;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)dropDown;
- (bool)hasCategory;
- (bool)hasDropDown;
- (bool)hasLinkType;
- (bool)hasProviderId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)linkType;
- (id)linkTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDropDown:(bool)arg1;
- (void)setHasDropDown:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setLinkType:(int)arg1;
- (void)setProviderId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
