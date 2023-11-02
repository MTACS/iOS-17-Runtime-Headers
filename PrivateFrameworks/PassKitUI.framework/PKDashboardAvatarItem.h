
@interface PKDashboardAvatarItem : NSObject <PKDashboardItem> {
    PKAccountUser * _accountUser;
    PKFamilyMember * _familyMember;
}

@property (nonatomic, retain) PKAccountUser *accountUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)accountUser;
- (id)familyMember;
- (void)setAccountUser:(id)arg1;
- (void)setFamilyMember:(id)arg1;

@end
