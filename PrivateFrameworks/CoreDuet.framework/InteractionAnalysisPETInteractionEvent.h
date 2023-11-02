
@interface InteractionAnalysisPETInteractionEvent : PBCodable <NSCopying> {
    NSString * _associatedMemberIDs;
    NSString * _bundleID;
    NSString * _direction;
    NSString * _eventMechanism;
    NSString * _interactionID;
    double  _timestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
