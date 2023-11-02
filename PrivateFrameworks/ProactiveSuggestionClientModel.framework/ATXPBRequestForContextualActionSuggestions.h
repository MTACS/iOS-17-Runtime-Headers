
@interface ATXPBRequestForContextualActionSuggestions : PBCodable <NSCopying> {
    NSData * _caxPredictionContext;
    NSString * _consumerSubTypeString;
    struct { 
        unsigned int timeout : 1; 
        unsigned int maxSuggestions : 1; 
    }  _has;
    int  _maxSuggestions;
    NSString * _originatorId;
    double  _timeout;
    NSString * _uuidString;
}

@property (nonatomic, retain) NSData *caxPredictionContext;
@property (nonatomic, retain) NSString *consumerSubTypeString;
@property (nonatomic, readonly) bool hasCaxPredictionContext;
@property (nonatomic, readonly) bool hasConsumerSubTypeString;
@property (nonatomic) bool hasMaxSuggestions;
@property (nonatomic, readonly) bool hasOriginatorId;
@property (nonatomic) bool hasTimeout;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic) int maxSuggestions;
@property (nonatomic, retain) NSString *originatorId;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSString *uuidString;

- (void).cxx_destruct;
- (id)caxPredictionContext;
- (id)consumerSubTypeString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCaxPredictionContext;
- (bool)hasConsumerSubTypeString;
- (bool)hasMaxSuggestions;
- (bool)hasOriginatorId;
- (bool)hasTimeout;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxSuggestions;
- (void)mergeFrom:(id)arg1;
- (id)originatorId;
- (bool)readFrom:(id)arg1;
- (void)setCaxPredictionContext:(id)arg1;
- (void)setConsumerSubTypeString:(id)arg1;
- (void)setHasMaxSuggestions:(bool)arg1;
- (void)setHasTimeout:(bool)arg1;
- (void)setMaxSuggestions:(int)arg1;
- (void)setOriginatorId:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUuidString:(id)arg1;
- (double)timeout;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end
