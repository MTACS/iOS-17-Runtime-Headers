
@interface TUHandle : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasSetISOCountryCode;
    NSString * _isoCountryCode;
    NSString * _normalizedValue;
    NSString * _siriDisplayName;
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasSetISOCountryCode;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *normalizedValue;
@property (getter=shouldHideContact, nonatomic, readonly) bool shouldHideContact;
@property (nonatomic, copy) NSString *siriDisplayName;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *value;

+ (id)handleForCHRecentCall:(id)arg1;
+ (id)handleForCHRecentCall:(id)arg1 validHandlesOnly:(bool)arg2;
+ (id)handleFromMessagingData:(id)arg1;
+ (long long)handleTypeForCHHandle:(id)arg1;
+ (id)handleWithDestinationID:(id)arg1;
+ (id)handleWithDictionaryRepresentation:(id)arg1;
+ (id)handleWithPerson:(id)arg1;
+ (id)handleWithPersonHandle:(id)arg1;
+ (id)handlesForCHRecentCall:(id)arg1;
+ (id)handlesForCHRecentCall:(id)arg1 validHandlesOnly:(bool)arg2;
+ (id)normalizedEmailAddressHandleForValue:(id)arg1;
+ (id)normalizedGenericHandleForValue:(id)arg1;
+ (id)normalizedHandleWithDestinationID:(id)arg1;
+ (id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2;
+ (id)stringForType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalHandleForISOCountryCode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSetISOCountryCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationID:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3;
- (id)initWithType:(long long)arg1 value:(id)arg2 siriDisplayName:(id)arg3;
- (bool)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandle:(id)arg1;
- (bool)isEquivalentToHandle:(id)arg1;
- (bool)isValidForISOCountryCode:(id)arg1;
- (id)isoCountryCode;
- (id)messagingData;
- (id)normalizedValue;
- (id)personHandle;
- (void)setHasSetISOCountryCode:(bool)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setSiriDisplayName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHideContact;
- (id)siriDisplayName;
- (long long)type;
- (id)value;

@end
