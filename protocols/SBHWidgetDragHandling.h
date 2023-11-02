
@protocol SBHWidgetDragHandling <NSObject>

@required

- (void)didBeginDraggingWidgetIcon:(SBWidgetIcon *)arg1;
- (void)didEndDraggingWidgetIcon:(SBWidgetIcon *)arg1;
- (SBWidgetIcon *)widgetIconForDescriptor:(CHSWidgetDescriptor *)arg1 sizeClass:(long long)arg2;
- (SBWidgetIcon *)widgetIconForDescriptors:(NSArray *)arg1 sizeClass:(long long)arg2;
- (SBWidgetIcon *)widgetIconForGalleryItem:(id <SBHAddWidgetSheetGalleryItem>)arg1 sizeClass:(long long)arg2;

@end
