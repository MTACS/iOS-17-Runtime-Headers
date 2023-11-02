
@interface INEventParticipant : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSNumber * _isEventOrganizer;
    NSNumber * _isUser;
    INPerson * _person;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isEventOrganizer;
@property (nonatomic, readonly, copy) NSNumber *isUser;
@property (nonatomic, readonly, copy) INPerson *person;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerson:(id)arg1 status:(long long)arg2 isUser:(id)arg3 isEventOrganizer:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)isEventOrganizer;
- (id)isUser;
- (id)person;
- (long long)status;

@end
