
@interface PKHashtagView : PKDetectionView {
    UIView * _blankPreviewView;
    <PKHashtagViewDelegate> * _delegate;
    PKHashtagItem * _hashtagItem;
}

@property (nonatomic, retain) UIView *blankPreviewView;
@property (nonatomic) <PKHashtagViewDelegate> *delegate;
@property (nonatomic, readonly) PKHashtagItem *hashtagItem;

- (void).cxx_destruct;
- (id)_underlineColor;
- (double)_underlineThickness;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)blankPreviewView;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (id)hashtagItem;
- (id)initWithHashtagItem:(id)arg1 inDrawing:(id)arg2;
- (id)item;
- (void)setBlankPreviewView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateActivationState;

@end
