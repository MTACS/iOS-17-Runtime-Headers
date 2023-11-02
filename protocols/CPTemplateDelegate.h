
@protocol CPTemplateDelegate <NSObject>

@required

- (void)handleActionForControlIdentifier:(NSUUID *)arg1;

@optional

- (bool)isCarPlayCanvasActive;
- (void)templateDidAppearWithIdentifier:(NSUUID *)arg1 animated:(bool)arg2;
- (void)templateDidDisappearWithIdentifier:(NSUUID *)arg1 animated:(bool)arg2;
- (void)templateDidDismissWithIdentifier:(NSUUID *)arg1;
- (void)templateWillAppearWithIdentifier:(NSUUID *)arg1 animated:(bool)arg2;
- (void)templateWillDisappearWithIdentifier:(NSUUID *)arg1 animated:(bool)arg2;

@end
