
@interface PXComposeRecipientTableViewModel : PXObservable {
    bool  _canAddRecipients;
    bool  _canDeleteRecipients;
    bool  _canSelectRecipients;
    PXComposeRecipientDataSourceManager * _composeRecipientDataSourceManager;
    NSArray * _composeRecipients;
    NSString * _footerTitle;
    NSString * _headerTitle;
    PXPeopleSuggestionsMediaProvider * _peopleSuggestionsMediaProvider;
    NSArray * _recipients;
    bool  _useGroupedBackgroundColor;
}

@property (nonatomic, readonly) bool canAddRecipients;
@property (nonatomic, readonly) bool canDeleteRecipients;
@property (nonatomic, readonly) bool canSelectRecipients;
@property (nonatomic, readonly) PXComposeRecipientDataSourceManager *composeRecipientDataSourceManager;
@property (nonatomic, readonly, copy) NSArray *composeRecipients;
@property (nonatomic, readonly, copy) NSString *footerTitle;
@property (nonatomic, readonly, copy) NSString *headerTitle;
@property (nonatomic, readonly) PXPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly) bool useGroupedBackgroundColor;

- (void).cxx_destruct;
- (bool)canAddRecipients;
- (bool)canDeleteRecipients;
- (bool)canSelectRecipients;
- (id)composeRecipientDataSourceManager;
- (id)composeRecipients;
- (id)footerTitle;
- (id)headerTitle;
- (id)init;
- (id)initWithComposeRecipientDataSourceManager:(id)arg1;
- (id)peopleSuggestionsMediaProvider;
- (void)performChanges:(id /* block */)arg1;
- (id)recipients;
- (void)setCanAddRecipients:(bool)arg1;
- (void)setCanDeleteRecipients:(bool)arg1;
- (void)setCanSelectRecipients:(bool)arg1;
- (void)setComposeRecipients:(id)arg1;
- (void)setFooterTitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setUseGroupedBackgroundColor:(bool)arg1;
- (bool)useGroupedBackgroundColor;

@end
