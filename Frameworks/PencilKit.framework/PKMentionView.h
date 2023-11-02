
@interface PKMentionView : PKDetectionView {
    UIView * _blankPreviewView;
    <PKMentionViewDelegate> * _delegate;
    UIColor * _mentionColor;
    PKMentionItem * _mentionItem;
    NSArray * _possibleParticipants;
}

@property (nonatomic, retain) UIView *blankPreviewView;
@property (nonatomic) <PKMentionViewDelegate> *delegate;
@property (nonatomic, retain) UIColor *mentionColor;
@property (nonatomic, readonly) PKMentionItem *mentionItem;
@property (nonatomic, copy) NSArray *possibleParticipants;

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
- (id)initWithMentionItem:(id)arg1 possibleParticipants:(id)arg2 inDrawing:(id)arg3;
- (id)item;
- (id)mentionColor;
- (id)mentionItem;
- (id)possibleParticipants;
- (void)setBlankPreviewView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMentionColor:(id)arg1;
- (void)setPossibleParticipants:(id)arg1;
- (void)updateActivationState;

@end
