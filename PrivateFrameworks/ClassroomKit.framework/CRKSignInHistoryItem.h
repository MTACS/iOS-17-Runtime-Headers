
@interface CRKSignInHistoryItem : NSObject <CRKDictionaryFormatable, NSCopying, NSSecureCoding> {
    NSString * _appleID;
    NSDate * _date;
    NSString * _deviceName;
    NSString * _deviceSerialNumber;
    NSString * _identifier;
    NSString * _userFamilyName;
    NSString * _userFullName;
    NSString * _userGivenName;
    NSString * _userMonogram;
}

@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *deviceSerialNumber;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *userFamilyName;
@property (nonatomic, readonly, copy) NSString *userFullName;
@property (nonatomic, readonly, copy) NSString *userGivenName;
@property (nonatomic, readonly, copy) NSString *userMonogram;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)deviceName;
- (id)deviceSerialNumber;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 appleID:(id)arg2 date:(id)arg3 deviceName:(id)arg4 deviceSerialNumber:(id)arg5 userGivenName:(id)arg6 userFamilyName:(id)arg7 userFullName:(id)arg8 userMonogram:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistoryItem:(id)arg1;
- (id)userFamilyName;
- (id)userFullName;
- (id)userGivenName;
- (id)userMonogram;

@end
