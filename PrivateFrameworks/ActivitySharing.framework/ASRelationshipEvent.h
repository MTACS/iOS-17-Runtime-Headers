
@interface ASRelationshipEvent : NSObject {
    unsigned short  _anchor;
    NSDate * _timestamp;
    unsigned short  _type;
}

@property (nonatomic, readonly) unsigned short anchor;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) unsigned short type;

+ (id)_relationshipEventWithCodable:(id)arg1;
+ (id)relationshipEventWithRecord:(id)arg1;

- (void).cxx_destruct;
- (id)_codableRelationshipEvent;
- (unsigned short)anchor;
- (id)description;
- (id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRelationshipEvent:(id)arg1;
- (id)timestamp;
- (unsigned short)type;

@end
