
@interface MEAddressAnnotation : NSObject <NSSecureCoding> {
    long long  _iconType;
    NSString * _localizedDescription;
    NSString * _originatorExtensionDisplayName;
}

@property (nonatomic, readonly) long long iconType;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, copy) NSString *originatorExtensionDisplayName;

+ (id)errorWithLocalizedDescription:(id)arg1;
+ (id)successWithLocalizedDescription:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)warningWithLocalizedDescription:(id)arg1;

- (void).cxx_destruct;
- (id)_iconTypeDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)iconType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddressTokenIconType:(long long)arg1 localizedDescription:(id)arg2;
- (id)localizedDescription;
- (id)originatorExtensionDisplayName;
- (void)setOriginatorExtensionDisplayName:(id)arg1;

@end
