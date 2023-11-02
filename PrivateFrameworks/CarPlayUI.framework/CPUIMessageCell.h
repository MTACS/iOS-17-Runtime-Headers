
@interface CPUIMessageCell : _CPUIBaseTableCell {
    NSArray * _constraints;
    UIImage * _leadingGlyph;
    UIImageView * _leadingGlyphView;
    UIImageView * _primaryImageView;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    UIImage * _trailingGlyph;
    UIImageView * _trailingGlyphView;
    UIImageView * _trailingImageView;
    UILabel * _trailingLabel;
    UIImageView * _unreadImageView;
    UIImage * _unreadIndicatorImage;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UIImage *leadingGlyph;
@property (nonatomic, retain) UIImageView *leadingGlyphView;
@property (nonatomic, retain) UIImageView *primaryImageView;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIImage *trailingGlyph;
@property (nonatomic, retain) UIImageView *trailingGlyphView;
@property (nonatomic, retain) UIImageView *trailingImageView;
@property (nonatomic, retain) UILabel *trailingLabel;
@property (nonatomic, retain) UIImageView *unreadImageView;
@property (nonatomic, retain) UIImage *unreadIndicatorImage;

+ (double)minimumHeight;
+ (double)rowHeight;

- (void).cxx_destruct;
- (void)_updateTintColors;
- (void)applyConfiguration:(id)arg1;
- (void)configureCell;
- (id)constraints;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)leadingGlyph;
- (id)leadingGlyphView;
- (id)primaryImageView;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setConstraints:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLeadingGlyph:(id)arg1;
- (void)setLeadingGlyphView:(id)arg1;
- (void)setPrimaryImageView:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setTrailingGlyph:(id)arg1;
- (void)setTrailingGlyphView:(id)arg1;
- (void)setTrailingImageView:(id)arg1;
- (void)setTrailingLabel:(id)arg1;
- (void)setUnread:(bool)arg1;
- (void)setUnreadImageView:(id)arg1;
- (void)setUnreadIndicatorImage:(id)arg1;
- (id)trailingGlyph;
- (id)trailingGlyphView;
- (id)trailingImageView;
- (id)trailingLabel;
- (id)unreadImageView;
- (id)unreadIndicatorImage;

@end
