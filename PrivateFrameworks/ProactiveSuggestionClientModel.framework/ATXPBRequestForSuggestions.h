
@interface ATXPBRequestForSuggestions : PBCodable <NSCopying> {
    NSString * _consumerSubTypeString;
    struct { 
        unsigned int timeout : 1; 
    }  _has;
    NSString * _originatorId;
    double  _timeout;
    NSString * _uuidString;
}

@property (nonatomic, retain) NSString *consumerSubTypeString;
@property (nonatomic, readonly) bool hasConsumerSubTypeString;
@property (nonatomic, readonly) bool hasOriginatorId;
@property (nonatomic) bool hasTimeout;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic, retain) NSString *originatorId;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSString *uuidString;

- (void).cxx_destruct;
- (id)consumerSubTypeString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConsumerSubTypeString;
- (bool)hasOriginatorId;
- (bool)hasTimeout;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originatorId;
- (bool)readFrom:(id)arg1;
- (void)setConsumerSubTypeString:(id)arg1;
- (void)setHasTimeout:(bool)arg1;
- (void)setOriginatorId:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUuidString:(id)arg1;
- (double)timeout;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end
