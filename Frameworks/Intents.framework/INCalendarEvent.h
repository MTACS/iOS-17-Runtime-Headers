
@interface INCalendarEvent : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _calendarPunchoutURI;
    INDateComponentsRange * _dateTimeRange;
    NSString * _eventIdentifier;
    NSNumber * _isContactBirthday;
    CLPlacemark * _location;
    NSArray * _participants;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *calendarPunchoutURI;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isContactBirthday;
@property (nonatomic, readonly, copy) CLPlacemark *location;
@property (nonatomic, readonly, copy) NSArray *participants;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)calendarPunchoutURI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTimeRange;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 title:(id)arg2 dateTimeRange:(id)arg3 participants:(id)arg4 location:(id)arg5 isContactBirthday:(id)arg6 calendarPunchoutURI:(id)arg7;
- (id)isContactBirthday;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)participants;
- (id)title;

@end
