
@interface GEORevealedPlaceCardModuleButton : PBCodable <NSCopying> {
    struct { 
        unsigned int has_linkType : 1; 
        unsigned int has_type : 1; 
        unsigned int has_isGroup : 1; 
        unsigned int read_metadata : 1; 
        unsigned int read_vendor : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isGroup;
    int  _linkType;
    NSString * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    NSString * _vendor;
}

@property (nonatomic) bool hasIsGroup;
@property (nonatomic) bool hasLinkType;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasVendor;
@property (nonatomic) bool isGroup;
@property (nonatomic) int linkType;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *vendor;

+ (bool)isValid:(id)arg1;
+ (id)moduleButtonForType:(int)arg1;

- (void).cxx_destruct;
- (int)StringAsLinkType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsGroup;
- (bool)hasLinkType;
- (bool)hasMetadata;
- (bool)hasType;
- (bool)hasVendor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (id)jsonRepresentation;
- (int)linkType;
- (id)linkTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsGroup:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsGroup:(bool)arg1;
- (void)setLinkType:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVendor:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)vendor;
- (void)writeTo:(id)arg1;

@end
