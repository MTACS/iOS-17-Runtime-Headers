
@interface ASKProfilePictureStore : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ACAccountStore * _accountStore;
    bool  _hasRequestedImages;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSString * _primaryAccountName;
    AAUIProfilePictureStore * _profilePictureStore;
    NSString * _storeAccountName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property bool hasRequestedImages;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, copy) NSString *primaryAccountName;
@property (nonatomic, retain) AAUIProfilePictureStore *profilePictureStore;
@property (nonatomic, copy) NSString *storeAccountName;

+ (id)sharedStore;

- (void).cxx_destruct;
- (void)_markAsHasRequestedImages;
- (id)_profilePictureForFamilyMember:(id)arg1 withProfilePictureStore:(id)arg2 usingMonogrammer:(id)arg3;
- (id)accessQueue;
- (id)accountStore;
- (void)appleAccountsDidChange:(id)arg1;
- (void)configureProfilePictureStoreAndNotifyIfNeeded;
- (void)dealloc;
- (bool)hasRequestedImages;
- (id)init;
- (id)notificationQueue;
- (void)notifyIfNeeded;
- (id)primaryAccountName;
- (void)profilePictureForAccountOwnerWithMonogramFallbackWithPictureDiameter:(double)arg1 completion:(id /* block */)arg2;
- (id)profilePictureStore;
- (void)profilePictureStoreDidChange:(id)arg1;
- (void)profilePictureWithMonogramFallbackForFamilyMembers:(id)arg1 pictureDiameter:(double)arg2 completion:(id /* block */)arg3;
- (void)setAccessQueue:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setHasRequestedImages:(bool)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setPrimaryAccountName:(id)arg1;
- (void)setProfilePictureStore:(id)arg1;
- (void)setStoreAccountName:(id)arg1;
- (id)storeAccountName;
- (void)storeAccountsDidChange:(id)arg1;

@end
