
@interface SearchUICommandRowModel : SearchUICardSectionRowModel {
    NSString * _sportsCanonicalID;
    TLKRichText * _subtitle;
    TLKRichText * _title;
    bool  _toggled;
    TLKRichText * _toggledTitle;
}

@property (readonly) TLKRichText *subtitle;
@property (readonly) TLKRichText *title;
@property (readonly) bool toggled;

- (void).cxx_destruct;
- (void)checkIfCommandIsValidWithCompletionHandler:(id /* block */)arg1;
- (bool)commandSupported;
- (void)getSubscriptionStatus:(id /* block */)arg1;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (void)safelyUpdateView:(id)arg1;
- (unsigned long long)subscriptionType;
- (id)subtitle;
- (id)title;
- (void)toggleStateWithDetailedSectionView:(id)arg1;
- (bool)toggled;
- (void)updateStateWithCommandCardSectionView:(id)arg1;

@end
