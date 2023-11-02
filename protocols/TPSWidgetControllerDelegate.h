
@protocol TPSWidgetControllerDelegate <NSObject>

@required

- (bool)widgetController:(TPSWidgetController *)arg1 validForDocument:(TPSDocument *)arg2 documentDeliveryInfoMap:(NSDictionary *)arg3 deliveryInfoMap:(NSDictionary *)arg4;

@end
