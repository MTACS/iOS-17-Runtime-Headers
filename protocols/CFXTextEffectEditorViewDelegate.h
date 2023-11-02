
@protocol CFXTextEffectEditorViewDelegate <NSObject>

@required

- (bool)textEffectEditorView:(CFXTextEffectEditorView *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (void)textEffectEditorView:(CFXTextEffectEditorView *)arg1 textChanged:(NSString *)arg2 shouldUpdateTextEditingProperties:(bool)arg3;

@end
