
@protocol ASCLoginChoiceProtocol <NSObject, NSSecureCoding>

@required

- (unsigned long long)loginChoiceKind;

@optional

- (bool)isSharedCredential;

@end
