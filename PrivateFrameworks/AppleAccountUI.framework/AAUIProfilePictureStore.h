
@interface AAUIProfilePictureStore : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    CNContactStore * _contactStore;
    <NSObject> * _contactStoreDidChangeObserver;
    AAGrandSlamSigner * _grandSlamSigner;
    long long  _monogramType;
    CNAvatarImageRenderer * _monogrammer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _monogrammerLock;
    NSOperationQueue * _networkingQueue;
    double  _pictureDiameter;
}

@property (nonatomic) long long monogramType;
@property (nonatomic) double pictureDiameter;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (void).cxx_destruct;
- (void)_beginObservingContactStoreDidChangeNotifications;
- (void)_contactStoreDidChange:(id)arg1;
- (bool)_contactSyncsWithiCloud:(id)arg1 error:(id*)arg2;
- (id)_contactWithImageDataMatchingFamilyMember:(id)arg1 error:(id*)arg2;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (void)_decodeImageAndCropRectForContact:(id)arg1 completion:(id /* block */)arg2;
- (void)_endObservingContactStoreDidChangeNotifications;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)_familyMember:(id)arg1 rawImageAndCropRect:(id /* block */)arg2;
- (id)_familyMemberPersonPicture:(id)arg1;
- (void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg1 personID:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureSupersetWithRequest:(id)arg1 personID:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(id /* block */)arg3;
- (id)_getAccountIdentifierForContact:(id)arg1 error:(id*)arg2;
- (id)_initWithoutAppleAccount;
- (void)_invalidateMonogrammer;
- (id)_meCardPicture;
- (void)_meCardRawImageAndCropRect:(id /* block */)arg1;
- (id)_monogrammedContactImage:(id)arg1;
- (id)_monogrammer;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1;
- (id)_profilePictureForPicture:(id)arg1 crop:(bool)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cacheable:(bool)arg4;
- (id)_sizedProfilePictureWithFallback:(id)arg1;
- (void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (id)cacheablePictureForPicture:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (void)fetchImageForAppleAccountPresentation:(id /* block */)arg1;
- (void)fetchProfilePictureForAccountOwner:(id /* block */)arg1;
- (void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRawImageAndCropRectForAccountOwner:(id /* block */)arg1;
- (void)fetchRawImageAndCropRectForFamilyMember:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAppleAccount:(id)arg1 store:(id)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)meCardWithVisualIdentity:(id /* block */)arg1;
- (id)monogramForCurrentAccount;
- (long long)monogramType;
- (double)pictureDiameter;
- (long long)pictureStyle;
- (id)profilePictureForAccountOwner;
- (void)profilePictureForAccountOwnerWithCompletion:(id /* block */)arg1;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (id)profilePictureForFamilyMember:(id)arg1;
- (id)profilePictureForLocalContact:(id)arg1;
- (id)profilePictureForPicture:(id)arg1;
- (id)profilePictureForPicture:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)renderingScope;
- (void)setMonogramType:(long long)arg1;
- (void)setPictureDiameter:(double)arg1;
- (void)setPictureStyle:(long long)arg1;
- (void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void)updateCacheWithPhoto:(id)arg1 cropRect:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

- (id)fa_profilePictureForFamilyMember:(id)arg1;

@end
