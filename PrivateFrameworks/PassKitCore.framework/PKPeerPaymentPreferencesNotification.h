
@interface PKPeerPaymentPreferencesNotification : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    unsigned long long  _notificationType;
    bool  _value;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) bool value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPreferencesNotification:(id)arg1;
- (unsigned long long)notificationType;
- (void)setAltDSID:(id)arg1;
- (void)setNotificationType:(unsigned long long)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
