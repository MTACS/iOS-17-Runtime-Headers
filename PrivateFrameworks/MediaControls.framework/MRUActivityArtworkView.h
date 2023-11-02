
@interface MRUActivityArtworkView : MRUArtworkView {
    bool  _adjustsImageWhenLoading;
    NSString * _artworkIdentifier;
    bool  _currentItemHasChangedSinceArtworkLastSet;
    unsigned long long  _currentState;
    NSString * _currentStateName;
    bool  _empty;
    UIImage * _emptyImage;
    NSTimer * _emptyTimer;
    NSString * _itemIdentifier;
    bool  _loading;
    bool  _onScreen;
    CCUICAPackageView * _packageView;
    bool  _playing;
    bool  _transitioning;
}

@property (nonatomic) bool adjustsImageWhenLoading;
@property (nonatomic, retain) NSString *artworkIdentifier;
@property (nonatomic) bool currentItemHasChangedSinceArtworkLastSet;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic, retain) NSString *currentStateName;
@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) UIImage *emptyImage;
@property (nonatomic, retain) NSTimer *emptyTimer;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (getter=isLoading, nonatomic) bool loading;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) CCUICAPackageView *packageView;
@property (getter=isPlaying, nonatomic) bool playing;
@property (getter=isTransitioning, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (bool)adjustsImageWhenLoading;
- (id)artworkIdentifier;
- (double)artworkLoadingTimeout;
- (bool)currentItemHasChangedSinceArtworkLastSet;
- (unsigned long long)currentState;
- (id)currentStateName;
- (id)description;
- (id)emptyImage;
- (id)emptyTimer;
- (id)init;
- (bool)isEmpty;
- (bool)isLoading;
- (bool)isOnScreen;
- (bool)isPlaying;
- (bool)isTransitioning;
- (id)itemIdentifier;
- (void)layoutSubviews;
- (id)packageView;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setAdjustsImageWhenLoading:(bool)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setCurrentImage:(id)arg1 animated:(bool)arg2;
- (void)setCurrentItemHasChangedSinceArtworkLastSet:(bool)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setCurrentStateName:(id)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setEmptyImage:(id)arg1;
- (void)setEmptyTimer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPackageView:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)transitionToImage:(id)arg1;
- (void)updatePackageAlphaAnimated:(bool)arg1;
- (void)updatePackageState;

@end
