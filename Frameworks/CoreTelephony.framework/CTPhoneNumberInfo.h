
@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayPhoneNumber;
    bool  _isEditable;
    bool  _isPresent;
    bool  _isRead;
    NSString * _label;
    NSString * _number;
}

@property (nonatomic, retain) NSString *displayPhoneNumber;
@property (nonatomic) bool isEditable;
@property (nonatomic) bool isPresent;
@property (nonatomic) bool isRead;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *number;
@property (nonatomic, readonly, copy) NSString *tps_localizedNumber;
@property (nonatomic, readonly, copy) NSString *tps_normalizedNumber;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayPhoneNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (bool)isPresent;
- (bool)isRead;
- (id)label;
- (id)number;
- (void)setDisplayPhoneNumber:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setIsPresent:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setNumber:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

- (id)tps_localizedNumber;
- (id)tps_normalizedNumber;

@end
