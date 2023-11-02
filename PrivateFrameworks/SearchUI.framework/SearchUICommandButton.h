
@interface SearchUICommandButton : TLKTextButton <SearchUICommandButton, SearchUIWatchListDelegate> {
    SearchUIWatchListState * _watchListState;
    SFButtonItem * buttonItem;
}

@property (retain) SFButtonItem *buttonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) SearchUIWatchListState *watchListState;

- (void).cxx_destruct;
- (id)buttonItem;
- (id)initWithWatchListState:(id)arg1;
- (void)setButtonItem:(id)arg1;
- (void)setWatchListState:(id)arg1;
- (void)updateStateIfNecessary;
- (id)watchListState;
- (void)watchListStateDidChange:(id)arg1;

@end
