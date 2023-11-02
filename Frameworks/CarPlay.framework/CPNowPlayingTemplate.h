
@interface CPNowPlayingTemplate : CPTemplate <CPNowPlayingClientTemplateDelegate> {
    bool  _albumArtistButtonEnabled;
    NSArray * _nowPlayingButtons;
    CARObserverHashTable * _nowPlayingObservers;
    bool  _upNextButtonEnabled;
    NSString * _upNextTitle;
}

@property (getter=isAlbumArtistButtonEnabled, nonatomic) bool albumArtistButtonEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *nowPlayingButtons;
@property (nonatomic, retain) CARObserverHashTable *nowPlayingObservers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (getter=isUpNextButtonEnabled, nonatomic) bool upNextButtonEnabled;
@property (nonatomic, copy) NSString *upNextTitle;

+ (id)sharedTemplate;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_updateLowerRegionButtons:(id)arg1;
- (void)_updateNowPlayingTemplate;
- (void)addObserver:(id)arg1;
- (void)albumArtistButtonTapped;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAction:(long long)arg1 forControlIdentifier:(id)arg2;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAlbumArtistButtonEnabled;
- (bool)isUpNextButtonEnabled;
- (id)leadingNavigationBarButtons;
- (id)nowPlayingButtons;
- (id)nowPlayingObservers;
- (void)removeObserver:(id)arg1;
- (void)setAlbumArtistButtonEnabled:(bool)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setNowPlayingObservers:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setUpNextButtonEnabled:(bool)arg1;
- (void)setUpNextTitle:(id)arg1;
- (id)trailingNavigationBarButtons;
- (void)upNextButtonTapped;
- (id)upNextTitle;
- (void)updateNowPlayingButtons:(id)arg1;

@end
