
@protocol WFSlotTemplateViewDelegate <NSObject>

@optional

- (void)menuDidDismissInSlotTemplateView:(WFSlotTemplateView *)arg1;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 deletePressedOnSlotWithIdentifier:(WFSlotIdentifier *)arg2 allowResettingValue:(bool)arg3;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didChangeText:(NSAttributedString *)arg2 forSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (void)slotTemplateView:(void *)arg1 didDeselectSlotWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: WFSlotTemplateView *, WFSlotIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didEndTypingInSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didSelectSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 didTapTextAttachment:(NSTextAttachment *)arg2 inSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 disclosureArrowDidChange:(bool)arg2;
- (WFMenu *)slotTemplateView:(WFSlotTemplateView *)arg1 menuForSlotIdentifier:(WFSlotIdentifier *)arg2 style:(unsigned long long)arg3;
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 outputButtonDidChange:(bool)arg2;
- (bool)slotTemplateView:(WFSlotTemplateView *)arg1 shouldChangeText:(NSAttributedString *)arg2 forSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (bool)slotTemplateView:(WFSlotTemplateView *)arg1 shouldTapTextAttachment:(NSTextAttachment *)arg2 inSlotWithIdentifier:(WFSlotIdentifier *)arg3;
- (void)slotTemplateView:(void *)arg1 typingDidCopyWithOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(void *)arg1 typingDidCutWithOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(void *)arg1 typingDidPasteWithOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateView:(WFSlotTemplateView *)arg1 willBeginTypingInSlotWithIdentifier:(WFSlotIdentifier *)arg2 usingTextEntry:(id <WFSlotTemplateTextEntry>)arg3 allowMultipleLines:(bool*)arg4;
- (void)slotTemplateViewDidInvalidateSize:(WFSlotTemplateView *)arg1;
- (void)slotTemplateViewTintColorDidChange:(WFSlotTemplateView *)arg1;

@end
