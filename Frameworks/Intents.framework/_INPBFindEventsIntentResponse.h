
@interface _INPBFindEventsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBFindEventsIntentResponse> {
    NSArray * _events;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic, readonly) unsigned long long eventsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
