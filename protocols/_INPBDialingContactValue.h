
@protocol _INPBDialingContactValue <NSObject>

@required

- (_INPBContactValue *)dialingContact;
- (_INPBStringValue *)dialingPhoneLabel;
- (_INPBStringValue *)dialingPhoneNumber;
- (bool)hasDialingContact;
- (bool)hasDialingPhoneLabel;
- (bool)hasDialingPhoneNumber;
- (void)setDialingContact:(_INPBContactValue *)arg1;
- (void)setDialingPhoneLabel:(_INPBStringValue *)arg1;
- (void)setDialingPhoneNumber:(_INPBStringValue *)arg1;

@end
