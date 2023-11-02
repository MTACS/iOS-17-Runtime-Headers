
@interface _INPBContactEventTrigger : PBCodable <NSCopying, NSSecureCoding, _INPBContactEventTrigger> {
    struct { }  _has;
    _INPBContact * _triggerContact;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasTriggerContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBContact *triggerContact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTriggerContact;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTriggerContact:(id)arg1;
- (id)triggerContact;
- (void)writeTo:(id)arg1;

@end
