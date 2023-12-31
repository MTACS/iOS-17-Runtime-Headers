
@interface MSTrackListCellContext : SUMediaItemCellContext {
    bool  _shouldHideContentRating;
    bool  _showSubtitle;
}

@property (nonatomic) bool shouldHideContentRating;
@property (nonatomic) bool showSubtitle;

- (void)setShouldHideContentRating:(bool)arg1;
- (void)setShowSubtitle:(bool)arg1;
- (bool)shouldHideContentRating;
- (bool)showSubtitle;

@end
