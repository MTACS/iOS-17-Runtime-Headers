
@protocol DBSmartWidgetSourceDelegate <DBEventHandling>

@required

- (void)sourceDidRefresh:(DBSmartWidgetSource *)arg1 predictionsUpdated:(bool)arg2;

@end
