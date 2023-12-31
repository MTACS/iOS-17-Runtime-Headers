
@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString *companyName;
@property (copy) NSString *firstName;
@property (copy) NSString *formattedName;
@property bool isCompany;
@property (copy) NSString *lastName;
@property (copy) NSString *middleName;
@property (copy) NSString *suffix;
@property (copy) NSString *title;

- (void)setCompanyName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFormattedName:(id)arg1;
- (void)setIsCompany:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setSuffix:(id)arg1;
- (void)setTitle:(id)arg1;

@end
