
@interface PKAccountUserFamilyMemberRowModel : NSObject <PKFamilyMemberRowModel> {
    PKAccountUser * _accountUser;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMember * _familyMember;
    UIImage * _image;
    PKFeatureApplication * _invitation;
}

@property (nonatomic, retain) PKAccountUser *accountUser;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) PKFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PKFeatureApplication *invitation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleText;

+ (id)sortedAccountUserFamilyMemberRowModelsForFamilyMemberCollection:(id)arg1 account:(id)arg2 accountUserCollection:(id)arg3 invitations:(id)arg4;

- (void).cxx_destruct;
- (long long)accessoryType;
- (id)accountUser;
- (id)accountUserCollection;
- (long long)cellStyle;
- (long long)compare:(id)arg1;
- (id)detailText;
- (id)familyMember;
- (id)image;
- (id)initWithFamilyMember:(id)arg1;
- (id)invitation;
- (void)setAccountUser:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInvitation:(id)arg1;
- (id)titleText;

@end
