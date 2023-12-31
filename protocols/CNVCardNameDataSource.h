
@protocol CNVCardNameDataSource <NSObject>

@required

- (NSString *)companyName;
- (NSString *)firstName;
- (bool)isCompany;
- (NSString *)lastName;
- (NSString *)middleName;
- (NSString *)suffix;
- (NSString *)title;

@end
