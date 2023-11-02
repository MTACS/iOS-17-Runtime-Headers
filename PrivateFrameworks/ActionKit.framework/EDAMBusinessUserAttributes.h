
@interface EDAMBusinessUserAttributes : FATObject {
    NSNumber * _companyStartDate;
    NSString * _department;
    NSString * _linkedInProfileUrl;
    NSString * _location;
    NSString * _mobilePhone;
    NSString * _title;
    NSString * _workPhone;
}

@property (nonatomic, retain) NSNumber *companyStartDate;
@property (nonatomic, retain) NSString *department;
@property (nonatomic, retain) NSString *linkedInProfileUrl;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSString *mobilePhone;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *workPhone;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)companyStartDate;
- (id)department;
- (id)linkedInProfileUrl;
- (id)location;
- (id)mobilePhone;
- (void)setCompanyStartDate:(id)arg1;
- (void)setDepartment:(id)arg1;
- (void)setLinkedInProfileUrl:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMobilePhone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWorkPhone:(id)arg1;
- (id)title;
- (id)workPhone;

@end
