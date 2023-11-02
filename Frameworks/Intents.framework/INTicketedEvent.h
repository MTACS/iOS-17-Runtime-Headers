
@interface INTicketedEvent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _category;
    INDateComponentsRange * _eventDuration;
    CLPlacemark * _location;
    NSString * _name;
}

@property (nonatomic, readonly) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INDateComponentsRange *eventDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLPlacemark *location;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDuration;
- (unsigned long long)hash;
- (id)initWithCategory:(long long)arg1 name:(id)arg2 eventDuration:(id)arg3 location:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)name;

@end
