
@interface LNConfirmationResponse : NSObject <NSSecureCoding> {
    bool  _confirmed;
    NSUUID * _identifier;
}

@property (getter=isConfirmed, nonatomic, readonly) bool confirmed;
@property (nonatomic, readonly) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 confirmed:(bool)arg2;
- (bool)isConfirmed;

@end
