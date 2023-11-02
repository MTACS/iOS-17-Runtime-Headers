
@interface PPM2TopicDonationError : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    long long  _code;
    struct { 
        unsigned int code : 1; 
        unsigned int reason : 1; 
        unsigned int source : 1; 
    }  _has;
    int  _reason;
    int  _source;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) long long code;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasCode;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSource;
@property (nonatomic) int reason;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (id)activeTreatments;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasCode;
- (bool)hasReason;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setCode:(long long)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
