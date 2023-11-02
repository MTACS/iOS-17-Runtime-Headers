
@interface ATXDefaultHomeScreenItemTilerGridSize3 : NSObject <ATXDefaultHomeScreenItemTiler> {
    ATXDefaultWidgetStack * _defaultStack;
    NSMutableArray * _defaultWidgetsLarge;
    NSMutableArray * _defaultWidgetsMedium;
    NSMutableArray * _defaultWidgetsSmall;
    ATXDefaultHomeScreenItemTilerHelper * _tilerHelper;
    unsigned long long  _widgetFamilyMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tiledHomeScreenItems;

- (void).cxx_destruct;
- (bool)_addFirstRow:(id)arg1;
- (bool)_addMediumRow:(id)arg1;
- (bool)_addRow:(id)arg1 rowSizePreference:(unsigned long long)arg2 allowAlternateRowSizeAsBackup:(bool)arg3;
- (bool)_addRow:(id)arg1 rowType:(unsigned long long)arg2;
- (bool)_addSmallRow:(id)arg1;
- (id)initWithDefaultStack:(id)arg1 defaultWidgetsSmall:(id)arg2 defaultWidgetsMedium:(id)arg3 defaultWidgetsLarge:(id)arg4 defaultWidgetsExtraLarge:(id)arg5 widgetFamilyMask:(unsigned long long)arg6;
- (id)tiledHomeScreenItems;

@end
