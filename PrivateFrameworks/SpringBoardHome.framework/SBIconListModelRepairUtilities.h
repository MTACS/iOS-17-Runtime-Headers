
@interface SBIconListModelRepairUtilities : NSObject

+ (bool)_findAndRepairEmptyRows:(id)arg1 avoidingIcons:(id)arg2 gridCellInfo:(id)arg3;
+ (bool)_findAndRepairSingleIconGaps:(id)arg1 gridCellInfo:(id)arg2;
+ (bool)_findAndRepairWidgetSizedGaps:(id)arg1 widgetGridSizeClass:(unsigned long long)arg2 widgetGridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg3 iconLayoutBehavior:(unsigned long long)arg4 gridCellInfo:(id)arg5;
+ (id)_firstIconOfSizeClass:(unsigned long long)arg1 withIcons:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (unsigned long long)_maxGridCellIndexWithGridCellInfo:(id)arg1;
+ (id)_performRepairOnIcons:(id)arg1 startingGridCellInfo:(id)arg2 gridCellInfoProvider:(id /* block */)arg3 usingRepairBlock:(id /* block */)arg4;
+ (id)repairModelByEliminatingGapsInIcons:(id)arg1 avoidingIcons:(id)arg2 gridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg3 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })arg4 iconLayoutBehavior:(unsigned long long)arg5 fixedIconLocations:(id)arg6;

@end
