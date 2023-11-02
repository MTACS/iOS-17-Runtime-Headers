
@protocol ATXDefaultHomeScreenItemTiler <NSObject>

@required

+ (id)new;

- (id)init;
- (id)initWithDefaultStack:(ATXDefaultWidgetStack *)arg1 defaultWidgetsSmall:(NSArray *)arg2 defaultWidgetsMedium:(NSArray *)arg3 defaultWidgetsLarge:(NSArray *)arg4 defaultWidgetsExtraLarge:(NSArray *)arg5 widgetFamilyMask:(unsigned long long)arg6;
- (NSArray *)tiledHomeScreenItems;

@end
