
@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSString * _accountID;
    NSString * _groupTitle;
    NSString * _identifier;
    NSMutableArray * _mutableItems;
    bool  _needsAccountID;
    NSString * _rowTitle;
}

@property (nonatomic, copy) NSString *accountID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool needsAccountID;
@property (nonatomic, copy) NSString *rowTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_expirationOrInformativeText;
- (id)accountID;
- (void)addItem:(id)arg1;
- (id)description;
- (id)footerText;
- (id)groupTitle;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)items;
- (bool)needsAccountID;
- (bool)restrictionEnabled;
- (id)rowTitle;
- (void)setAccountID:(id)arg1;
- (void)setGroupTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNeedsAccountID:(bool)arg1;
- (void)setRowTitle:(id)arg1;
- (bool)shouldCoalesceItems;
- (id)subtitleText;

@end
