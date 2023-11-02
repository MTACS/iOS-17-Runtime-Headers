
@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {
    UILabel * _animationFromLabel;
    UILabel * _animationToLabel;
    NSAttributedString * _displayedEmojiString;
    bool  _dragEnabled;
    _TUIKeyboardEmojiDraggableView * _emojiLabel;
    unsigned long long  _nestedAnimationCount;
}

@property (nonatomic, retain) NSAttributedString *displayedEmojiString;
@property (nonatomic) bool dragEnabled;
@property (nonatomic, readonly) _TUIKeyboardEmojiDraggableView *emojiLabel;

+ (id)_createDraggableEmojiLabel;
+ (id)_createEmojiLabel;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)displayedEmojiString;
- (bool)dragEnabled;
- (id)emojiLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplayedEmojiString:(id)arg1;
- (void)setDisplayedEmojiString:(id)arg1 animated:(bool)arg2 withAnimationOffset:(unsigned long long)arg3;
- (void)setDragEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;

@end
