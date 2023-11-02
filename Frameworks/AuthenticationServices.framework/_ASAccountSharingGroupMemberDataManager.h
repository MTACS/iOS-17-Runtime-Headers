
@interface _ASAccountSharingGroupMemberDataManager : NSObject {
    ACAccountStore * _accountStore;
    NSMutableDictionary * _avatarImageDiameterToRenderingScopes;
    CNAvatarImageRenderer * _avatarImageRenderer;
    CNContactStore * _contactStore;
    AAUIProfilePictureStore * _profilePictureStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) _ASAccountSharingGroupMemberData *groupMemberDataForPrimaryAccount;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)KCSharingParticipantsFromGroupMembers:(id)arg1;
- (id)_contactDisplayNameFromNameComponents:(id)arg1;
- (id)_contactForCurrentUser;
- (id)_formattedAddressForAddress:(id)arg1;
- (id)_renderingScopeForDiameter:(double)arg1;
- (double)_screenScale;
- (id)_shortContactDisplayNameFromNameComponents:(id)arg1;
- (id)avatarImageForContact:(id)arg1 diameter:(double)arg2;
- (id)avatarImageForGroupMember:(id)arg1 diameter:(double)arg2;
- (id)avatarImageForPrimaryAccountOwnerWithDiameter:(double)arg1;
- (id)avatarImageForUserHandle:(id)arg1 diameter:(double)arg2;
- (id)contactStore;
- (id)displayNameForOriginalContributorParticipantID:(id)arg1 inGroupID:(id)arg2;
- (id)fetchContactForUserHandle:(id)arg1;
- (id)groupMemberDataForGroup:(id)arg1;
- (id)groupMemberDataForGroupParticipants:(id)arg1;
- (id)groupMemberDataForPrimaryAccount;
- (id)groupMemberDataForRecipients:(id)arg1;
- (id)init;
- (id)nameForOriginalContributorParticipantID:(id)arg1 inGroupID:(id)arg2;
- (id)placeholderAvatarImageWithDiameter:(double)arg1;

@end
