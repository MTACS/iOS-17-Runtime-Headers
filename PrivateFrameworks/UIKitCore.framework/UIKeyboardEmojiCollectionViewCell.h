
@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {
    bool  _cellBeingTouched;
    UIKeyboardEmoji * _emoji;
    UIKeyboardEmojiDraggableView * _emojiLabel;
    UIView * _navigationHighlightView;
    bool  _noResultsCell;
    UILabel * _noResultsLabel;
    UILabel * _unreleasedBanner;
    bool  _unreleasedHighlight;
}

@property (nonatomic) bool cellBeingTouched;
@property (nonatomic, copy) UIKeyboardEmoji *emoji;
@property (nonatomic) long long emojiFontSize;
@property (nonatomic, readonly) UIKeyboardEmojiDraggableView *emojiLabel;
@property (nonatomic, retain) UIView *navigationHighlightView;
@property (nonatomic) bool noResultsCell;
@property (nonatomic, retain) UILabel *noResultsLabel;
@property (nonatomic, retain) UILabel *unreleasedBanner;
@property (nonatomic) bool unreleasedHighlight;

- (void).cxx_destruct;
- (bool)cellBeingTouched;
- (id)debugDescription;
- (id)emoji;
- (long long)emojiFontSize;
- (id)emojiLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)navigationHighlightView;
- (bool)noResultsCell;
- (id)noResultsLabel;
- (void)setCellBeingTouched:(bool)arg1;
- (void)setEmoji:(id)arg1;
- (void)setEmojiFontSize:(long long)arg1;
- (void)setNavigationHighlightView:(id)arg1;
- (void)setNoResultsCell:(bool)arg1;
- (void)setNoResultsLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUnreleasedBanner:(id)arg1;
- (void)setUnreleasedHighlight:(bool)arg1;
- (id)unreleasedBanner;
- (bool)unreleasedHighlight;

@end
