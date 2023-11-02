
@interface _INPBEvent : PBCodable <NSCopying, NSSecureCoding, _INPBEvent> {
    NSArray * _eventDescriptors;
    _INPBString * _eventType;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *eventDescriptors;
@property (nonatomic, readonly) unsigned long long eventDescriptorsCount;
@property (nonatomic, retain) _INPBString *eventType;
@property (nonatomic, readonly) bool hasEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventDescriptorsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEventDescriptors:(id)arg1;
- (void)clearEventDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDescriptors;
- (id)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDescriptorsCount;
- (id)eventType;
- (bool)hasEventType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventDescriptors:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
