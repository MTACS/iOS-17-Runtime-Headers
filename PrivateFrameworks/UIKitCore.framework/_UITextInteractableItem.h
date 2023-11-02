
@interface _UITextInteractableItem : NSObject {
    UIContextMenuInteraction * _contextMenuInteraction;
    UIAction * _defaultAction;
    UINotificationFeedbackGenerator * _feedbackGenerator;
    _UITextItemHighlightView * _highlightView;
    _UITextItemInteractionHandler * _itemHandler;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    UITextItemMenuConfiguration * _preparedMenuConfiguration;
    UIAction * _primaryAction;
    UITextRange * _range;
    UITextItem * _representedTextItem;
    struct { 
        unsigned int primaryAction : 1; 
        unsigned int menu : 1; 
    }  _requested;
    <_UITextContent> * _textContent;
    UIView<_UITextItemInteracting> * _textItemInteractingView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, readonly) UIAction *defaultAction;
@property (nonatomic, readonly) UINotificationFeedbackGenerator *feedbackGenerator;
@property (nonatomic, readonly) _UITextItemHighlightView *highlightView;
@property (nonatomic, retain) _UITextItemInteractionHandler *itemHandler;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) UITextItemMenuConfiguration *preparedMenuConfiguration;
@property (nonatomic, readonly) UITextRange *range;
@property (nonatomic, readonly) NSArray *rects;
@property (nonatomic, readonly) UITextItem *representedTextItem;
@property (nonatomic) <_UITextContent> *textContent;
@property (nonatomic, readonly) UIView<_UITextItemInteracting> *textItemInteractingView;

+ (id)customItemWithTag:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint { double x1; double x2; })arg4;
+ (id)itemForAttachment:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint { double x1; double x2; })arg4;
+ (id)itemForLink:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (bool)_actionPresentsMenu:(id)arg1;
- (bool)_allowHighlight;
- (bool)_allowInteraction:(long long)arg1;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_showsPreviewByDefault;
- (id)_solverWithUnifyRects:(bool)arg1;
- (void)_warnForInvalidAction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canInvokeDefaultAction;
- (id)contextMenuConfiguration;
- (id)contextMenuInteraction;
- (void)dealloc;
- (id)defaultAction;
- (bool)defaultActionPresentsMenu;
- (id)feedbackGenerator;
- (bool)hasPrimaryAction;
- (void)highlight;
- (id)highlightView;
- (id)initWithRange:(id)arg1 view:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)invokeDefaultAction;
- (bool)isAttachmentItem;
- (bool)isEqual:(id)arg1;
- (bool)isLinkItem;
- (bool)isTagItem;
- (id)itemHandler;
- (id)itemRepresentationWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGPoint { double x1; double x2; })location;
- (void)prepareMenuConfigurationWithDefaultMenu:(id)arg1;
- (id)preparedMenuConfiguration;
- (id)preparedPrimaryActionWithDefaultAction:(id)arg1;
- (id)range;
- (id)rects;
- (id)representedTextItem;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setItemHandler:(id)arg1;
- (void)setTextContent:(id)arg1;
- (bool)showsMenuPreview;
- (id)textContent;
- (id)textItemInteractingView;
- (void)unhighlight;

@end
