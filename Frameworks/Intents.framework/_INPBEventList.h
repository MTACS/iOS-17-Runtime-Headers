
@interface _INPBEventList : PBCodable <NSCopying, NSSecureCoding, _INPBEventList> {
    _INPBCondition * _condition;
    NSArray * _events;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic, readonly) unsigned long long eventsCount;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)clearEvents;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventAtIndex:(unsigned long long)arg1;
- (id)events;
- (unsigned long long)eventsCount;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
