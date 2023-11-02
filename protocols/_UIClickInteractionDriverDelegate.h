
@protocol _UIClickInteractionDriverDelegate <NSObject>

@required

- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)clickDriver:(void *)arg1 shouldBegin:(void *)arg2; // needs 2 arg types, found 7: <_UIClickInteractionDriving> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@optional

- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
- (bool)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldBeDelayedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;

@end
