
@protocol _UIHyperAnimator_Internal <_UIHyperAnimator>

@required

- (void)_animateWithParameters:(void *)arg1 animations:(void *)arg2; // needs 2 arg types, found 6: _UISpringParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (unsigned long long)_dimensions;
- (void)_interactionBegan;
- (void)_interactionChanged;
- (void)_interactionEndedMutatingState:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (_UIHyperInteractor *)_interactor;
- (void)_setInteractor:(_UIHyperInteractor *)arg1;

@end
