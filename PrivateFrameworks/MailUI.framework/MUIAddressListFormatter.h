
@interface MUIAddressListFormatter : NSFormatter <MFAddressBookClient> {
    MFAddressBookManager * _addressBookManager;
    EFLazyCache * _addressCache;
    EFLazyCache * _attributedAddressCache;
    EFLazyCache * _commentCache;
    MUILocalizationListFormatter * _listFormatter;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (nonatomic, readonly) MFAddressBookManager *addressBookManager;
@property (nonatomic, retain) EFLazyCache *addressCache;
@property (nonatomic, retain) EFLazyCache *attributedAddressCache;
@property (nonatomic, retain) EFLazyCache *commentCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUILocalizationListFormatter *listFormatter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMUserProfileProvider> *userProfileProvider;

- (void).cxx_destruct;
- (id)_addressCommentForAddressList:(id)arg1 preferFullDisplayName:(bool)arg2;
- (id)_attributedAddressCommentForAddressList:(id)arg1 preferFullDisplayName:(bool)arg2;
- (void)_invalidateCache;
- (id)addressBookManager;
- (void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)arg1;
- (id)addressCache;
- (id)attributedAddressCache;
- (id)attributedStringFromEmailAddressList:(id)arg1;
- (id)commentCache;
- (void)dealloc;
- (id)initWithUserProfileProvider:(id)arg1 addressBookManager:(id)arg2;
- (id)listFormatter;
- (void)setAddressCache:(id)arg1;
- (void)setAttributedAddressCache:(id)arg1;
- (void)setCommentCache:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromAddressAddressList:(id)arg1;
- (id)stringFromAddressAddressList:(id)arg1 preferFullDisplayName:(bool)arg2;
- (id)stringFromEmailAddressList:(id)arg1 preferFullDisplayName:(bool)arg2;
- (id)userProfileProvider;

@end
