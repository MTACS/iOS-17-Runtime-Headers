
@protocol _UIClickInteractionDelegateInternal <_UIClickInteractionDelegate>

@required

- (unsigned long long)_clickInteractionDefaultDriverType:(_UIClickInteraction *)arg1;
- (void)clickInteraction:(_UIClickInteraction *)arg1 didObserveForce:(double)arg2;

@optional

- (void)_clickInteraction:(void *)arg1 shouldBegin:(void *)arg2; // needs 2 arg types, found 7: _UIClickInteraction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
