
@interface GEOLogMsgEventPlaceCacheLookup : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    unsigned int  _bytes;
    struct { 
        unsigned int has_businessId : 1; 
        unsigned int has_bytes : 1; 
        unsigned int has_localSearchProviderID : 1; 
        unsigned int has_lookupResult : 1; 
    }  _flags;
    int  _localSearchProviderID;
    int  _lookupResult;
    NSString * _requestAppIdentifier;
}

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) unsigned int bytes;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasBytes;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic) bool hasLookupResult;
@property (nonatomic, readonly) bool hasRequestAppIdentifier;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int lookupResult;
@property (nonatomic, retain) NSString *requestAppIdentifier;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLookupResult:(id)arg1;
- (unsigned long long)businessId;
- (unsigned int)bytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBusinessId;
- (bool)hasBytes;
- (bool)hasLocalSearchProviderID;
- (bool)hasLookupResult;
- (bool)hasRequestAppIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)localSearchProviderID;
- (int)lookupResult;
- (id)lookupResultAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestAppIdentifier;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setBytes:(unsigned int)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasBytes:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasLookupResult:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setLookupResult:(int)arg1;
- (void)setRequestAppIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
