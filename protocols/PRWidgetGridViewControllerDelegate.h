
@protocol PRWidgetGridViewControllerDelegate <NSObject>

@required

- (void)widgetGridViewController:(PRWidgetGridViewController *)arg1 didRequestLaunchForComplicationDescriptor:(PRComplicationDescriptor *)arg2 withAction:(BSAction *)arg3;

@optional

- (void)widgetGridViewController:(PRWidgetGridViewController *)arg1 didAddWidget:(PRComplicationDescriptor *)arg2 atIndex:(long long)arg3;
- (void)widgetGridViewController:(PRWidgetGridViewController *)arg1 didRemoveComplication:(PRComplicationDescriptor *)arg2;
- (void)widgetGridViewController:(PRWidgetGridViewController *)arg1 didUpdateIconLayout:(NSDictionary *)arg2;
- (void)widgetGridViewControllerDidTapBackground:(PRWidgetGridViewController *)arg1;

@end
