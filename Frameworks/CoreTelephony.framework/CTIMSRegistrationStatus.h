
@interface CTIMSRegistrationStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _isRegisteredForSMS;
    bool  _isRegisteredForVoice;
}

@property (nonatomic) bool isRegisteredForSMS;
@property (nonatomic) bool isRegisteredForVoice;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isRegisteredForSMS;
- (bool)isRegisteredForVoice;
- (void)setIsRegisteredForSMS:(bool)arg1;
- (void)setIsRegisteredForVoice:(bool)arg1;

@end
