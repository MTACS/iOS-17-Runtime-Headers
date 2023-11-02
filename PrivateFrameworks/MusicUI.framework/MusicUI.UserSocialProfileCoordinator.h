
@interface MusicUI.UserSocialProfileCoordinator : NSObject {
    void $__lazy_storage_$_socialServiceController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _userArtistFavoritesCache;
    void _userSocialProfile;
    void isUserOnboarded;
    void lock;
    void objectGraph;
    void onFollowStateDidChange;
    void onPendingFollowRequestsDidChange;
    void onSocialOnboardingSharedPlaylistsHidden;
    void onUserOnboardedStatusHasChanged;
    void onUserProfileDidChange;
    void pendingUserSelectedPhotoData;
    void socialOnboardingFriendIDsToRequest;
    void socialOnboardingUserAttributes;
    void socialProfileSharedPlaylistIDsMap;
    void state;
    void userNotificationSettings;
}

- (void).cxx_destruct;
- (id)init;

@end
