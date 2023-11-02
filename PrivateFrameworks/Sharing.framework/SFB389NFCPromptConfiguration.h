
@interface SFB389NFCPromptConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _baUUID;
    NSString * _localizedTitle;
    NSString * _message;
    NSString * _phoneNumber;
    unsigned long long  _promptState;
    NSString * _userMessage;
}

@property (nonatomic, retain) NSUUID *baUUID;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic) unsigned long long promptState;
@property (nonatomic, retain) NSString *userMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (id)message;
- (id)phoneNumber;
- (unsigned long long)promptState;
- (void)setBaUUID:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPromptState:(unsigned long long)arg1;
- (void)setUserMessage:(id)arg1;
- (id)userMessage;

@end
