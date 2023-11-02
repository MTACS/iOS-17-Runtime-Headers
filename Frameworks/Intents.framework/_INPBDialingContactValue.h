
@interface _INPBDialingContactValue : PBCodable <NSCopying, NSSecureCoding, _INPBDialingContactValue> {
    _INPBContactValue * _dialingContact;
    _INPBStringValue * _dialingPhoneLabel;
    _INPBStringValue * _dialingPhoneNumber;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBContactValue *dialingContact;
@property (nonatomic, retain) _INPBStringValue *dialingPhoneLabel;
@property (nonatomic, retain) _INPBStringValue *dialingPhoneNumber;
@property (nonatomic, readonly) bool hasDialingContact;
@property (nonatomic, readonly) bool hasDialingPhoneLabel;
@property (nonatomic, readonly) bool hasDialingPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dialingContact;
- (id)dialingPhoneLabel;
- (id)dialingPhoneNumber;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDialingContact;
- (bool)hasDialingPhoneLabel;
- (bool)hasDialingPhoneNumber;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDialingContact:(id)arg1;
- (void)setDialingPhoneLabel:(id)arg1;
- (void)setDialingPhoneNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
