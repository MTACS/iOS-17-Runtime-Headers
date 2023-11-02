
@interface AMSPhoneNumberContextInfo : NSObject {
    bool  _isVoicePreferred;
    NSString * _phoneNumber;
    NSString * _simLabel;
    NSUUID * _uuid;
}

@property (readonly) bool isVoicePreferred;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *simLabel;
@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPhoneNumber:(id)arg1 simLabel:(id)arg2 uuid:(id)arg3 isVoicePreferred:(bool)arg4;
- (bool)isVoicePreferred;
- (id)phoneNumber;
- (id)simLabel;
- (id)uuid;

@end
