
@interface PURemotePasscodePolicy : NSObject <NSSecureCoding> {
    bool  _modificationAllowed;
    unsigned long long  _passcodeMinimumLength;
}

@property (getter=isModificationAllowed, nonatomic) bool modificationAllowed;
@property (nonatomic) unsigned long long passcodeMinimumLength;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isModificationAllowed;
- (unsigned long long)passcodeMinimumLength;
- (void)setModificationAllowed:(bool)arg1;
- (void)setPasscodeMinimumLength:(unsigned long long)arg1;

@end
