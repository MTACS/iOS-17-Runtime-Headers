
@interface PKPeerPaymentFamilyMemberRowModel : NSObject <PKFamilyMemberRowModel> {
    PKPeerPaymentAccount * _account;
    PKFamilyMember * _familyMember;
    UIImage * _image;
    PKPeerPaymentAccountInvitation * _invitation;
}

@property (nonatomic, retain) PKPeerPaymentAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) PKFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PKPeerPaymentAccountInvitation *invitation;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleText;

+ (id)sortedPeerPaymentFamilyMemberRowModelsForFamilyMembers:(id)arg1 peerPaymentAccount:(id)arg2;

- (void).cxx_destruct;
- (long long)accessoryType;
- (id)account;
- (long long)cellStyle;
- (long long)compare:(id)arg1;
- (id)detailText;
- (id)familyMember;
- (id)image;
- (id)initWithFamilyMember:(id)arg1;
- (id)invitation;
- (void)setAccount:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInvitation:(id)arg1;
- (unsigned long long)state;
- (id)titleText;

@end
