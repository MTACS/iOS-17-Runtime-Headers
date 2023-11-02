
@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel {
    <SearchUIWatchListCardRowModelDelegate> * _delegate;
    bool  _hasError;
    bool  _hasLoaded;
    SFImage * _image;
    SearchUIWatchListCardsManager * _manager;
    SFPunchout * _punchout;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) SFWatchListCardSection *cardSection;
@property <SearchUIWatchListCardRowModelDelegate> *delegate;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasLoaded;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic, retain) SearchUIWatchListCardsManager *manager;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)delegate;
- (bool)hasError;
- (bool)hasLoaded;
- (id)image;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (bool)isDraggable;
- (bool)isTappable;
- (id)manager;
- (id)punchout;
- (id)punchouts;
- (int)separatorStyle;
- (void)setDelegate:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)updateWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)updateWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 punchout:(id)arg4;

@end
