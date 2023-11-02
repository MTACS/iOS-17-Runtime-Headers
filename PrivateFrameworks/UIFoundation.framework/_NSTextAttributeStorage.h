
@interface _NSTextAttributeStorage : _NSTextRunStorage

- (bool)_attributesInTextRange:(id)arg1 areEqualToAttributes:(id)arg2;
- (bool)_setAttributes:(id)arg1 forTextRange:(id)arg2 checkForChange:(bool)arg3;
- (bool)addAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (void)enumerateAttributesFromLocation:(id)arg1 reverse:(bool)arg2 usingBlock:(id /* block */)arg3;
- (bool)removeAttribute:(id)arg1 forTextRange:(id)arg2;
- (bool)setAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (bool)setAttributes:(id)arg1 forTextRange:(id)arg2;

@end
