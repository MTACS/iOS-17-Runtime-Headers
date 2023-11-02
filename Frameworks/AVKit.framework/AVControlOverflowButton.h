
@interface AVControlOverflowButton : AVButton {
    UIContextMenuInteraction * _activeMenuInteraction;
    <AVControlOverflowButtonDelegate> * _delegate;
}

@property (nonatomic) <AVControlOverflowButtonDelegate> *delegate;

+ (id)firstGenerationButton;
+ (id)secondGenerationButton;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)updateContextMenu;

@end
