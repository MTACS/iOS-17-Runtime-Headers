
@interface BMPBSiriPrivateLearningSELFEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSData * _eventData;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _uniqueId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSData *eventData;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasEventData;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) NSString *uniqueId;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventData;
- (bool)hasAbsoluteTimestamp;
- (bool)hasEventData;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setEventData:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
