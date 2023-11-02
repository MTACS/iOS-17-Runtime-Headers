
@protocol _UIImageSymbolAnimationPreset

@required

- (bool)_isSymbolEffect;
- (bool)_isSymbolTransition;
- (bool)_isValidAnimationPreset;
- (void)_performCompletionHandler;
- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <_UIImageSymbolAnimationPreset> *, void*, id, SEL
- (void)setCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIImageSymbolAnimationPreset> *, void*

@end
