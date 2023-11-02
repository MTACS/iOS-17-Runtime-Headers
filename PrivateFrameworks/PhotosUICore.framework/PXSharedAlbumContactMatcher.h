
@interface PXSharedAlbumContactMatcher : NSObject {
    NSCache * _avatarRendererByContactImageDiameter;
    NSCache * _contactIdentifiersBySubscriberIdentifiers;
    NSCache * _contactPhotosCache;
    CNContactStore * _contactStore;
}

+ (id)sharedMatcher;

- (void).cxx_destruct;
- (id)_fetchContactMatchingIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)_fetchContactMatchingSubscriberInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)_fetchContactsMatchingIdentifiers:(id)arg1 keysToFetch:(id)arg2;
- (void)_observeContactStoreNotifications;
- (void)contactsDidChange:(id)arg1;
- (id)contactsMatchingSubscriberInfos:(id)arg1 keysToFetch:(id)arg2;
- (id)init;
- (void)requestContactPhotoForContact:(id)arg1 diameter:(double)arg2 resultHandler:(id /* block */)arg3;

@end
