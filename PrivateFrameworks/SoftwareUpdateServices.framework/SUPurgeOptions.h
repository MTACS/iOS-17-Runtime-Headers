
@interface SUPurgeOptions : SUOptionsBase <NSCopying, NSSecureCoding> {
    bool  _notifyUser;
    bool  _userRequested;
}

@property (nonatomic) bool notifyUser;
@property (nonatomic) bool userRequested;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)notifyUser;
- (void)setNotifyUser:(bool)arg1;
- (void)setUserRequested:(bool)arg1;
- (bool)userRequested;

@end
