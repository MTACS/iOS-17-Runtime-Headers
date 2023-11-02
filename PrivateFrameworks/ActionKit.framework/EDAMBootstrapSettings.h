
@interface EDAMBootstrapSettings : FATObject {
    NSString * _accountEmailDomain;
    NSString * _announcementsUrl;
    NSString * _cardscanUrl;
    NSNumber * _enableFacebookSharing;
    NSNumber * _enableGiftSubscriptions;
    NSNumber * _enableGoogle;
    NSNumber * _enableLinkedInSharing;
    NSNumber * _enablePublicNotebooks;
    NSNumber * _enableSharedNotebooks;
    NSNumber * _enableSingleNoteSharing;
    NSNumber * _enableSponsoredAccounts;
    NSNumber * _enableSupportTickets;
    NSNumber * _enableTwitterSharing;
    NSString * _marketingUrl;
    NSString * _serviceHost;
    NSString * _supportUrl;
}

@property (nonatomic, retain) NSString *accountEmailDomain;
@property (nonatomic, retain) NSString *announcementsUrl;
@property (nonatomic, retain) NSString *cardscanUrl;
@property (nonatomic, retain) NSNumber *enableFacebookSharing;
@property (nonatomic, retain) NSNumber *enableGiftSubscriptions;
@property (nonatomic, retain) NSNumber *enableGoogle;
@property (nonatomic, retain) NSNumber *enableLinkedInSharing;
@property (nonatomic, retain) NSNumber *enablePublicNotebooks;
@property (nonatomic, retain) NSNumber *enableSharedNotebooks;
@property (nonatomic, retain) NSNumber *enableSingleNoteSharing;
@property (nonatomic, retain) NSNumber *enableSponsoredAccounts;
@property (nonatomic, retain) NSNumber *enableSupportTickets;
@property (nonatomic, retain) NSNumber *enableTwitterSharing;
@property (nonatomic, retain) NSString *marketingUrl;
@property (nonatomic, retain) NSString *serviceHost;
@property (nonatomic, retain) NSString *supportUrl;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)accountEmailDomain;
- (id)announcementsUrl;
- (id)cardscanUrl;
- (id)enableFacebookSharing;
- (id)enableGiftSubscriptions;
- (id)enableGoogle;
- (id)enableLinkedInSharing;
- (id)enablePublicNotebooks;
- (id)enableSharedNotebooks;
- (id)enableSingleNoteSharing;
- (id)enableSponsoredAccounts;
- (id)enableSupportTickets;
- (id)enableTwitterSharing;
- (id)marketingUrl;
- (id)serviceHost;
- (void)setAccountEmailDomain:(id)arg1;
- (void)setAnnouncementsUrl:(id)arg1;
- (void)setCardscanUrl:(id)arg1;
- (void)setEnableFacebookSharing:(id)arg1;
- (void)setEnableGiftSubscriptions:(id)arg1;
- (void)setEnableGoogle:(id)arg1;
- (void)setEnableLinkedInSharing:(id)arg1;
- (void)setEnablePublicNotebooks:(id)arg1;
- (void)setEnableSharedNotebooks:(id)arg1;
- (void)setEnableSingleNoteSharing:(id)arg1;
- (void)setEnableSponsoredAccounts:(id)arg1;
- (void)setEnableSupportTickets:(id)arg1;
- (void)setEnableTwitterSharing:(id)arg1;
- (void)setMarketingUrl:(id)arg1;
- (void)setServiceHost:(id)arg1;
- (void)setSupportUrl:(id)arg1;
- (id)supportUrl;

@end
