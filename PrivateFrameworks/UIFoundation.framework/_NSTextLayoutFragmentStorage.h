
@interface _NSTextLayoutFragmentStorage : _NSTextRunStorage

@property (readonly) long long offsetDeltaForLastTextLayoutFragment;

- (id)adjustedTextRangeWithTextRange:(id)arg1 adjustment:(unsigned long long)arg2;
- (id)enumerateTextLayoutFragmentFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)enumerateTextLayoutFragmentInTextRange:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)invalidateTextLayoutFragmentsInTextRange:(id)arg1 adjustTextRange:(bool)arg2;
- (void)invalidateTextLayoutFragmentsInTextRange:(id)arg1 delta:(long long)arg2;
- (long long)offsetDeltaForLastTextLayoutFragment;
- (bool)revalidateLayoutFragmentRangeForLocation:(id)arg1;
- (void)setTextLayoutFragments:(id)arg1;
- (id)textLayoutFragmentForTextLocation:(id)arg1 allowsTrailingEdge:(bool)arg2;

@end
