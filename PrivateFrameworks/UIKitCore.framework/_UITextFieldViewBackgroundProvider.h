
@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (nonatomic, readonly) UIView *backgroundView;

- (void)_buildDescription:(id)arg1;
- (void)addToTextField:(id)arg1;
- (id)backgroundView;
- (void)didChangeFirstResponder;
- (bool)hitTestView:(id)arg1;
- (void)layoutIfNeeded;
- (id)overridingSetBackgroundColor:(id)arg1;
- (void)populateArchivedSubviews:(id)arg1;
- (void)removeFromTextField;
- (void)setNeedsDisplay;

@end
