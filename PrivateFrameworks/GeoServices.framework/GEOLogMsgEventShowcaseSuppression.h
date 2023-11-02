
@interface GEOLogMsgEventShowcaseSuppression : PBCodable <NSCopying> {
    NSString * _adamId;
    unsigned long long  _businessId;
    struct { 
        unsigned int has_businessId : 1; 
        unsigned int has_localSearchProviderID : 1; 
        unsigned int has_suppressionReason : 1; 
        unsigned int read_adamId : 1; 
        unsigned int read_showcaseId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _localSearchProviderID;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _showcaseId;
    int  _suppressionReason;
}

@property (nonatomic, retain) NSString *adamId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic, readonly) bool hasAdamId;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic, readonly) bool hasShowcaseId;
@property (nonatomic) bool hasSuppressionReason;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic, retain) NSString *showcaseId;
@property (nonatomic) int suppressionReason;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSuppressionReason:(id)arg1;
- (id)adamId;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdamId;
- (bool)hasBusinessId;
- (bool)hasLocalSearchProviderID;
- (bool)hasShowcaseId;
- (bool)hasSuppressionReason;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdamId:(id)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasSuppressionReason:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setShowcaseId:(id)arg1;
- (void)setSuppressionReason:(int)arg1;
- (id)showcaseId;
- (int)suppressionReason;
- (id)suppressionReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
