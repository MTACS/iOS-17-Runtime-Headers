
@protocol CHSWidgetEventServiceServerInterface <NSObject>

@required

- (oneway void)handleOpenEventWithURL:(NSURL *)arg1;
- (oneway void)handleOpenEventWithUserActivityData:(NSData *)arg1;

@end
