
@interface PXCMMSharedAlbumParticipant : NSObject <NSCopying, PXCMMInvitationParticipant> {
    NSString * _emailAddressString;
    NSString * _firstName;
    NSString * _localizedName;
    NSString * _phoneNumberString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddressString;
- (id)firstName;
- (id)initWithRecord:(id)arg1;
- (id)localizedName;
- (id)phoneNumberString;

@end
