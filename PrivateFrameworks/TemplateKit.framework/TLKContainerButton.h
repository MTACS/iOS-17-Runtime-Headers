
@interface TLKContainerButton : TLKView <UIContextMenuInteractionDelegate> {
    <TLKContainerButtonDelegate> * _actionDelegate;
    UIView * _containedView;
    UIButton * _intrinsicButton;
}

@property (nonatomic) <TLKContainerButtonDelegate> *actionDelegate;
@property (readonly) UIView *containedView;
@property (readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIButton *intrinsicButton;
@property (readonly) Class superclass;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMargins;

- (void).cxx_destruct;
- (id)actionDelegate;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)containedView;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)didSelectButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithContent:(id)arg1 delegate:(id)arg2;
- (id)intrinsicButton;
- (void)layoutSubviews;
- (id)menu;
- (void)setActionDelegate:(id)arg1;
- (id)setupContentView;

@end
