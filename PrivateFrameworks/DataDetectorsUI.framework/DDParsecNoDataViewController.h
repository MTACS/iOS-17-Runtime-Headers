
@interface DDParsecNoDataViewController : UIViewController {
    NSURL * _altURL;
    UIView * _container;
    _UIContentUnavailableView * _emptyNoContentView;
    UILabel * _errorLabel;
    bool  _lookup;
    NSString * _reason;
    NSString * _searchWebQuery;
}

@property (nonatomic, retain) NSURL *altURL;
@property (nonatomic) bool lookup;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *searchWebQuery;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)altURL;
- (void)loadView;
- (bool)lookup;
- (void)manageDictionaries:(id)arg1;
- (id)manageDictionariesURL;
- (id)reason;
- (void)searchWeb:(id)arg1;
- (id)searchWebQuery;
- (void)setAltURL:(id)arg1;
- (void)setLookup:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setSearchWebQuery:(id)arg1;
- (void)updateStyle;

@end
