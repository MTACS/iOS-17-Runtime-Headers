
@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate> {
    bool  _allowCalloutActions;
    BOOL  _balloonColor;
    NSMutableDictionary * _composeImages;
    bool  _disableAttachments;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    NSMutableDictionary * _mediaObjects;
    NSMutableDictionary * _pluginDisplayContainers;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) bool allowCalloutActions;
@property (nonatomic) BOOL balloonColor;
@property (nonatomic, retain) NSMutableDictionary *composeImages;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMessageEntryRichTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAttachments;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) NSMutableDictionary *mediaObjects;
@property (nonatomic, retain) NSMutableDictionary *pluginDisplayContainers;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

+ (void)setNeedsDisplayCurrentRenderAttributesForView:(id)arg1;

- (void).cxx_destruct;
- (bool)_canSuggestSupplementalItemsForCurrentSelection;
- (void)_cancelChooseSupplementalItemToInsert;
- (void)_chooseSupplementalItemToInsert:(id)arg1 replacementRange:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_compositionFromSelection;
- (void)_insertSupplementalItem:(id)arg1 forString:(id)arg2 replacementRange:(id)arg3;
- (void)_insertionPointEnteredRange:(id)arg1 string:(id)arg2 supplementalItems:(id)arg3;
- (void)_insertionPointExitedRangeWithSupplementalItems;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromUITextRange:(id)arg1;
- (bool)_reconfigureWithLayoutManager:(id)arg1 triggeredByLayoutManagerAccess:(bool)arg2 triggeringSelector:(SEL)arg3;
- (void)_setAnimatingMentionsHidden:(bool)arg1;
- (void)_showCustomInputView;
- (void)_textKit2_handleTapOrLongPress:(id)arg1 isLongPress:(bool)arg2;
- (bool)allowCalloutActions;
- (id)attributedTextForCompositionText:(id)arg1;
- (BOOL)balloonColor;
- (id)cachedMediaObjectForTransferGUID:(id)arg1;
- (id)cachedPluginDisplayContainerForGUID:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (id)composeImageForTransferGUID:(id)arg1 traitCollection:(id)arg2;
- (id)composeImages;
- (id)compositionText;
- (void)copy:(id)arg1;
- (void)correctedTypedText:(id)arg1 rangeOfReplacement:(id)arg2;
- (void)cut:(id)arg1;
- (void)dealloc;
- (bool)disableAttachments;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePastedString:(id)arg1 toRange:(id)arg2;
- (void)handleTapOrLongPress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingTextLayoutManager:(bool)arg2 shouldDisableAttachments:(bool)arg3;
- (bool)isSingleLineDocument;
- (id)longPressGestureRecognizer;
- (id)mediaObjects;
- (void)paste:(id)arg1;
- (id)pasteConfiguration;
- (id)pasteboard;
- (id)pluginDisplayContainers;
- (void)previewDidChange:(id)arg1;
- (void)setAllowCalloutActions:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setComposeImages:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setDisableAttachments:(bool)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setNeedsDisplayCurrentRenderAttributes;
- (void)setPluginDisplayContainers:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)updateComposeImages;
- (void)validateCommand:(id)arg1;

@end
