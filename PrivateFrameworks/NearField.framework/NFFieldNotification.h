
@interface NFFieldNotification : NSObject <NSCopying, NSSecureCoding> {
    bool  _cachedBeforeRFReset;
    NSDate * _creationDate;
    unsigned long long  _notificationType;
    unsigned int  _rfTechnology;
    unsigned short  _typeFSystemCode;
}

@property (nonatomic) bool cachedBeforeRFReset;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly) unsigned long long notificationType;
@property (readonly) unsigned int rfTechnology;
@property (readonly) unsigned short typeFSystemCode;

+ (id)notificationWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_creationDateString;
- (bool)cachedBeforeRFReset;
- (unsigned long long)chFieldType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNotificationType:(unsigned long long)arg1 rfTechnology:(unsigned int)arg2 typeFSystemCode:(unsigned short)arg3 creationDate:(id)arg4 cachedBeforeRFReset:(bool)arg5;
- (bool)isCHAutoNegotiationField;
- (bool)isCHInitiatorDetected;
- (bool)isCHReceiverDetected;
- (bool)isCHTerminal;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTerminalInfo:(id)arg1;
- (bool)isEqualWithoutRFTech:(id)arg1;
- (unsigned long long)notificationType;
- (unsigned int)rfTechnology;
- (void)setCachedBeforeRFReset:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setNotificationType:(unsigned long long)arg1;
- (unsigned short)typeFSystemCode;

@end
