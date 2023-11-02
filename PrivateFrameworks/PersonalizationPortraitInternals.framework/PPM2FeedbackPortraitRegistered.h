
@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    NSString * _clientId;
    int  _domain;
    int  _feedbackDomainStatus;
    struct { 
        unsigned int domain : 1; 
        unsigned int feedbackDomainStatus : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _mappingId;
    NSMutableArray * _records;
    int  _type;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) int domain;
@property (nonatomic) int feedbackDomainStatus;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasFeedbackDomainStatus;
@property (nonatomic, readonly) bool hasMappingId;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *mappingId;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic) int type;

+ (id)options;
+ (Class)recordsType;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (int)StringAsFeedbackDomainStatus:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)activeTreatments;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (int)feedbackDomainStatus;
- (id)feedbackDomainStatusAsString:(int)arg1;
- (bool)hasActiveTreatments;
- (bool)hasClientId;
- (bool)hasDomain;
- (bool)hasFeedbackDomainStatus;
- (bool)hasMappingId;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mappingId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setActiveTreatments:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setFeedbackDomainStatus:(int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasFeedbackDomainStatus:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMappingId:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
