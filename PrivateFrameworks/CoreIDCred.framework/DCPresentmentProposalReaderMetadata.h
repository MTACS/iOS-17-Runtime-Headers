
@interface DCPresentmentProposalReaderMetadata : NSObject <NSSecureCoding> {
    NSData * _iconData;
    NSString * _iconMediaType;
    NSURL * _iconURL;
    NSString * _identifier;
    NSNumber * _merchantCategoryCode;
    NSString * _organization;
    NSString * _organizationalUnit;
    NSURL * _privacyPolicyURL;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *iconData;
@property (nonatomic, readonly) NSString *iconMediaType;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *merchantCategoryCode;
@property (nonatomic, readonly) NSString *organization;
@property (nonatomic, readonly) NSString *organizationalUnit;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)iconData;
- (id)iconMediaType;
- (id)iconURL;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 organization:(id)arg2 organizationalUnit:(id)arg3 iconData:(id)arg4 iconURL:(id)arg5 iconMediaType:(id)arg6 privacyPolicyURL:(id)arg7 merchantCategoryCode:(id)arg8;
- (id)merchantCategoryCode;
- (id)organization;
- (id)organizationalUnit;
- (id)privacyPolicyURL;

@end
