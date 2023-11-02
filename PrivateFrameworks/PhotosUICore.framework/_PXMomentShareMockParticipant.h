
@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant> {
    NSString * _firstName;
    NSString * _localizedName;
    NSString * emailAddressString;
    NSString * phoneNumberString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)emailAddressString;
- (id)firstName;
- (id)localizedName;
- (id)phoneNumberString;
- (void)setFirstName:(id)arg1;
- (void)setLocalizedName:(id)arg1;

@end
