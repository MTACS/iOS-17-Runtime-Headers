
@protocol PRComplicationGalleryWidgetHostProviding <NSObject>

@required

- (void)invalidateWidgetHostViewControllersForReason:(NSString *)arg1;
- (CHUISWidgetHostViewController *)widgetHostViewControllerForDescriptor:(PRComplicationDescriptor *)arg1 forReason:(NSString *)arg2;

@end
