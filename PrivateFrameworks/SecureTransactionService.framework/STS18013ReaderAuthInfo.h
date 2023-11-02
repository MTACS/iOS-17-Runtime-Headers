
@interface STS18013ReaderAuthInfo : NSObject {
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

@property (nonatomic, readonly) NSData *certificateData;
@property (nonatomic, readonly) NSData *iconData;
@property (nonatomic, readonly) NSString *iconMediaType;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *merchantCategoryCode;
@property (nonatomic, readonly) NSString *organization;
@property (nonatomic, readonly) NSString *organizationUnit;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;

- (void).cxx_destruct;
- (id)certificateData;
- (id)description;
- (id)iconData;
- (id)iconMediaType;
- (id)iconURL;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 organization:(id)arg2 organizationUnit:(id)arg3 iconData:(id)arg4 iconURL:(id)arg5 iconMediaType:(id)arg6 privacyPolicyURL:(id)arg7 merchantCategoryCode:(id)arg8 certificateData:(id)arg9;
- (id)merchantCategoryCode;
- (id)organization;
- (id)organizationUnit;
- (id)privacyPolicyURL;

@end
