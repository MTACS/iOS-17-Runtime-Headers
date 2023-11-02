
@interface ISO18013ReaderAuthInfo : NSObject <NSSecureCoding> {
    NSData * _certificateData;
    NSData * _iconData;
    NSString * _iconMediaType;
    NSURL * _iconURL;
    NSString * _identifier;
    NSNumber * _merchantCategoryCode;
    NSString * _organization;
    NSString * _organizationUnit;
    NSURL * _privacyPolicyURL;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
