
@interface GEOPBCompanionSubscriptionsInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_loadedSubscriptions : 1; 
        unsigned int read_offlineTileMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _loadedSubscriptions;
    GEOPBOfflineTileMetadata * _offlineTileMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasOfflineTileMetadata;
@property (nonatomic, retain) NSMutableArray *loadedSubscriptions;
@property (nonatomic, retain) GEOPBOfflineTileMetadata *offlineTileMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)loadedSubscriptionType;

- (void).cxx_destruct;
- (void)addLoadedSubscription:(id)arg1;
- (void)clearLoadedSubscriptions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOfflineTileMetadata;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)loadedSubscriptionAtIndex:(unsigned long long)arg1;
- (id)loadedSubscriptions;
- (unsigned long long)loadedSubscriptionsCount;
- (void)mergeFrom:(id)arg1;
- (id)offlineTileMetadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLoadedSubscriptions:(id)arg1;
- (void)setOfflineTileMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
