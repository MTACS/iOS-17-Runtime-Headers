
@interface PPStorableFeedback : PBCodable <NSCopying> {
    NSString * _build;
    NSString * _clientBundleIdentifier;
    NSString * _clientIdentifier;
    NSMutableArray * _feedbackItems;
    struct { 
        unsigned int secondsFrom1970 : 1; 
        unsigned int storeType : 1; 
        unsigned int isMapped : 1; 
    }  _has;
    bool  _isMapped;
    NSString * _mappingId;
    double  _secondsFrom1970;
    unsigned int  _storeType;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) NSString *clientBundleIdentifier;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSMutableArray *feedbackItems;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasClientBundleIdentifier;
@property (nonatomic, readonly) bool hasClientIdentifier;
@property (nonatomic) bool hasIsMapped;
@property (nonatomic, readonly) bool hasMappingId;
@property (nonatomic) bool hasSecondsFrom1970;
@property (nonatomic) bool hasStoreType;
@property (nonatomic) bool isMapped;
@property (nonatomic, retain) NSString *mappingId;
@property (nonatomic) double secondsFrom1970;
@property (nonatomic) unsigned int storeType;

+ (Class)feedbackItemsType;

- (void).cxx_destruct;
- (void)addFeedbackItems:(id)arg1;
- (id)build;
- (void)clearFeedbackItems;
- (id)clientBundleIdentifier;
- (id)clientIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackItems;
- (id)feedbackItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackItemsCount;
- (bool)hasBuild;
- (bool)hasClientBundleIdentifier;
- (bool)hasClientIdentifier;
- (bool)hasIsMapped;
- (bool)hasMappingId;
- (bool)hasSecondsFrom1970;
- (bool)hasStoreType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMapped;
- (id)mappingId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)secondsFrom1970;
- (void)setBuild:(id)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setFeedbackItems:(id)arg1;
- (void)setHasIsMapped:(bool)arg1;
- (void)setHasSecondsFrom1970:(bool)arg1;
- (void)setHasStoreType:(bool)arg1;
- (void)setIsMapped:(bool)arg1;
- (void)setMappingId:(id)arg1;
- (void)setSecondsFrom1970:(double)arg1;
- (void)setStoreType:(unsigned int)arg1;
- (unsigned int)storeType;
- (void)writeTo:(id)arg1;

@end
