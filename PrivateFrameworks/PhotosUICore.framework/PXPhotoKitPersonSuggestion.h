
@interface PXPhotoKitPersonSuggestion : NSObject <PXPersonSuggestion> {
    PXRecipientTransport * _fetchQueue_bestTransport;
    bool  _fetchQueue_checkedForLinkedContact;
    CNContact * _fetchQueue_linkedContact;
    CNContact * _fetchQueue_prefetchedContact;
    PHFetchResult * _keyAssetFetchResult;
    PHFetchResult * _keyFaceFetchResult;
    NSString * _localizedName;
    PHPerson * _person;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (nonatomic, readonly) PHFetchResult *keyFaceFetchResult;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) Class superclass;

+ (id)personSuggestionWithPerson:(id)arg1;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;

- (void).cxx_destruct;
- (void)_fetchQueue_fetchLinkedContactForPerson:(id)arg1;
- (id)_linkedContactForPerson:(id)arg1;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)fetchContactAndBestTransport:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyAssetFetchResult;
- (id)keyFaceFetchResult;
- (id)localizedName;
- (bool)matchesRecipientInRecipients:(id)arg1;
- (id)person;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1;
- (id)personSuggestionUpdatedPerson:(id)arg1;
- (void)setPrefetchedContact:(id)arg1;

@end
