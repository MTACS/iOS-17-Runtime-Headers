
@interface FCCCoalescingRuleProtobuf : PBCodable <NSCopying> {
    NSString * _eventIdentifier;
    struct { 
        unsigned int interval : 1; 
    }  _has;
    double  _interval;
}

@property (nonatomic, retain) NSString *eventIdentifier;
@property (nonatomic, readonly) bool hasEventIdentifier;
@property (nonatomic) bool hasInterval;
@property (nonatomic) double interval;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventIdentifier;
- (bool)hasEventIdentifier;
- (bool)hasInterval;
- (unsigned long long)hash;
- (double)interval;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setInterval:(double)arg1;
- (void)writeTo:(id)arg1;

@end
