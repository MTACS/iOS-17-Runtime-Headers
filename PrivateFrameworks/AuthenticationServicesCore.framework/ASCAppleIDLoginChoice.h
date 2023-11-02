
@interface ASCAppleIDLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    NSString * _user;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSharedCredential;
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loginChoiceKind;
- (id)user;

@end
