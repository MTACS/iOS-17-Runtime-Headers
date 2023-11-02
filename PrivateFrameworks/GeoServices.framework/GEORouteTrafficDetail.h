
@interface GEORouteTrafficDetail : PBCodable <NSCopying> {
    struct { 
        unsigned int has_routeTrafficCondition : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_spokenRouteName : 1; 
        unsigned int read_unabbreviatedRouteName : 1; 
        unsigned int read_writtenRouteName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _routeTrafficCondition;
    NSString * _spokenRouteName;
    NSString * _unabbreviatedRouteName;
    PBUnknownFields * _unknownFields;
    NSString * _writtenRouteName;
}

@property (nonatomic) bool hasRouteTrafficCondition;
@property (nonatomic, readonly) bool hasSpokenRouteName;
@property (nonatomic, readonly) bool hasUnabbreviatedRouteName;
@property (nonatomic, readonly) bool hasWrittenRouteName;
@property (nonatomic) int routeTrafficCondition;
@property (nonatomic, retain) NSString *spokenRouteName;
@property (nonatomic, retain) NSString *unabbreviatedRouteName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *writtenRouteName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRouteTrafficCondition:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteTrafficCondition;
- (bool)hasSpokenRouteName;
- (bool)hasUnabbreviatedRouteName;
- (bool)hasWrittenRouteName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)routeTrafficCondition;
- (id)routeTrafficConditionAsString:(int)arg1;
- (void)setHasRouteTrafficCondition:(bool)arg1;
- (void)setRouteTrafficCondition:(int)arg1;
- (void)setSpokenRouteName:(id)arg1;
- (void)setUnabbreviatedRouteName:(id)arg1;
- (void)setWrittenRouteName:(id)arg1;
- (id)spokenRouteName;
- (id)unabbreviatedRouteName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)writtenRouteName;

@end
