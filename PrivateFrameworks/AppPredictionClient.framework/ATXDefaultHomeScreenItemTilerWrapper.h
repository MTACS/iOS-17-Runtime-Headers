
@interface ATXDefaultHomeScreenItemTilerWrapper : NSObject {
    <ATXDefaultHomeScreenItemTiler> * _tiler;
}

@property (nonatomic, readonly) NSArray *tiledHomeScreenItems;

- (void).cxx_destruct;
- (id)initWithDefaultStack:(id)arg1 defaultWidgetsSmall:(id)arg2 defaultWidgetsMedium:(id)arg3 defaultWidgetsLarge:(id)arg4 defaultWidgetsExtraLarge:(id)arg5 widgetFamilyMask:(unsigned long long)arg6 gridSize:(unsigned long long)arg7;
- (id)tiledHomeScreenItems;

@end
