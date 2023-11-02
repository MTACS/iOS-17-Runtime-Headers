
@interface GEOWiFiHarvestLabel : PBCodable <NSCopying> {
    NSString * _comment;
    struct { 
        unsigned int has_networkType : 1; 
        unsigned int has_originator : 1; 
        unsigned int read_comment : 1; 
        unsigned int read_internalIdentifier : 1; 
        unsigned int read_venueCategory : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _internalIdentifier;
    int  _networkType;
    int  _originator;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _venueCategory;
}

@property (nonatomic, retain) NSString *comment;
@property (nonatomic, readonly) bool hasComment;
@property (nonatomic, readonly) bool hasInternalIdentifier;
@property (nonatomic) bool hasNetworkType;
@property (nonatomic) bool hasOriginator;
@property (nonatomic, readonly) bool hasVenueCategory;
@property (nonatomic, retain) NSString *internalIdentifier;
@property (nonatomic) int networkType;
@property (nonatomic) int originator;
@property (nonatomic, retain) NSString *venueCategory;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsNetworkType:(id)arg1;
- (int)StringAsOriginator:(id)arg1;
- (id)comment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComment;
- (bool)hasInternalIdentifier;
- (bool)hasNetworkType;
- (bool)hasOriginator;
- (bool)hasVenueCategory;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)internalIdentifier;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)networkType;
- (id)networkTypeAsString:(int)arg1;
- (int)originator;
- (id)originatorAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setHasNetworkType:(bool)arg1;
- (void)setHasOriginator:(bool)arg1;
- (void)setInternalIdentifier:(id)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setOriginator:(int)arg1;
- (void)setVenueCategory:(id)arg1;
- (id)venueCategory;
- (void)writeTo:(id)arg1;

@end
