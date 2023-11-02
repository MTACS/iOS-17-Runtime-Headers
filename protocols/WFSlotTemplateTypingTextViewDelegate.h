
@protocol WFSlotTemplateTypingTextViewDelegate <UITextViewDelegate>

@optional

- (void)slotTemplateTypingTextViewDidCopy:(void *)arg1 withOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateTypingTextView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateTypingTextViewDidCut:(void *)arg1 withOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateTypingTextView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateTypingTextViewDidDelete:(WFSlotTemplateTypingTextView *)arg1;
- (void)slotTemplateTypingTextViewDidPaste:(void *)arg1 withOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateTypingTextView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateTypingTextViewDidTabBackwards:(void *)arg1 withOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateTypingTextView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)slotTemplateTypingTextViewDidTabForwards:(void *)arg1 withOriginalBlock:(void *)arg2; // needs 2 arg types, found 6: WFSlotTemplateTypingTextView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
