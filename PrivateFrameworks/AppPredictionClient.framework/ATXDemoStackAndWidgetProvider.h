
@interface ATXDemoStackAndWidgetProvider : NSObject

+ (bool)_shouldShowStackInGallery;
+ (id)_widgetArrayForPrefixKey:(id)arg1 countKey:(id)arg2 defaults:(id)arg3 descriptors:(id)arg4;
+ (id)_widgetFromDictionary:(id)arg1 descriptors:(id)arg2;
+ (id)demoStackAndWidgets;
+ (bool)isDemoModeEnabled;
+ (void)startYourEngines;

@end
