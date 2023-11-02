
@protocol PXWidgetEditingDelegate <NSObject>

@optional

- (void)widget:(id <PXWidget>)arg1 didChangeEditingMode:(bool)arg2;
- (void)widgetEditorHeightDidChange:(id <PXWidget>)arg1;

@end
