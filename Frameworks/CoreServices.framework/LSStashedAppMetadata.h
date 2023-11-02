
@interface LSStashedAppMetadata : NSObject <NSSecureCoding> {
    NSString * _bundleShortVersion;
    NSDate * _dateOriginallyInstalled;
    NSDate * _dateStashed;
    NSString * _exactBundleVersion;
    NSString * _signerOrganization;
    unsigned char  _validationState;
}

@property (getter=isUPPValidated, readonly) bool UPPValidated;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSDate *dateOriginallyInstalled;
@property (readonly) NSDate *dateStashed;
@property (readonly) NSString *exactBundleVersion;
@property (getter=isFreeProfileValidated, readonly) bool freeProfileValidated;
@property (getter=isProfileValidated, readonly) bool profileValidated;
@property (readonly) NSString *signerOrganization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleShortVersion;
- (id)dateOriginallyInstalled;
- (id)dateStashed;
- (void)encodeWithCoder:(id)arg1;
- (id)exactBundleVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2;
- (bool)isFreeProfileValidated;
- (bool)isProfileValidated;
- (bool)isUPPValidated;
- (id)signerOrganization;

@end
