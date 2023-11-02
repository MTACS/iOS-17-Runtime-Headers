
@interface HMEProtoEventInfo : PBCodable <NSCopying> {
    HMEProtoEvent * _event;
    NSString * _topic;
}

@property (nonatomic, retain) HMEProtoEvent *event;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic, retain) NSString *topic;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (bool)hasEvent;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
