
@protocol DOCTagEditorPresenter <NSObject>

@required

- (bool)delayResizingUntilAppeared;
- (<DOCTagEditorDelegate> *)delegate;
- (NSArray *)items;
- (void)setDelayResizingUntilAppeared:(bool)arg1;
- (void)setDelegate:(id <DOCTagEditorDelegate>)arg1;
- (void)setItems:(NSArray *)arg1;
- (void)setUseCompactColorPicker:(bool)arg1;
- (bool)useCompactColorPicker;

@end
