
@interface UIApplicationAuditIssuesAccessibility : NSObject

+ (id)_accessibilityGetAllSubviews:(id)arg1 withFiltering:(bool)arg2;
+ (id)_accessibilityGetAllSwiftUISubviews:(id)arg1 withFiltering:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axAuditBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 onSwiftUIView:(id)arg2;
+ (void)_axAuditCaptureReferenceToCellsForViewHierarchy:(id)arg1;
+ (void)_axAuditCheckElementForClipping:(id)arg1 storeIntoSet:(id)arg2;
+ (void)_axAuditCheckSwiftUIViewForClipping:(id)arg1 storeIntoSet:(id)arg2;
+ (id)_axAuditContrastDetectionForSwiftUIView:(id)arg1;
+ (id)_axAuditCreateElementInfoDictionariesForSubviews:(id)arg1;
+ (id)_axAuditDereferenceCellsForViewHierarchy:(id)arg1;
+ (bool)_axAuditElementIsClipping:(id)arg1;
+ (id)_axAuditFindAllCollectionViewsInHierarchyForElements:(id)arg1;
+ (id)_axAuditFindAllCollectionViewsInHierarchyForView:(id)arg1;
+ (id)_axAuditFindAllTablesInHierarchyForElements:(id)arg1;
+ (id)_axAuditFindAllTablesInHierarchyForView:(id)arg1;
+ (id)_axAuditFindDescendantInaccessibleElements:(id)arg1 honorsGroups:(bool)arg2;
+ (id)_axAuditFindElementsNotSupportingDynamicText:(id)arg1;
+ (id)_axAuditFindFrontmostViewControllerForHierarchy:(id)arg1;
+ (void)_axAuditForHierarchy:(id)arg1 withTableOrCollectionViews:(id)arg2 performAction:(id)arg3 performBlockOnEachCell:(id /* block */)arg4;
+ (id)_axAuditGetAllFontSizes;
+ (id)_axAuditGetAllTableAndCollectionViewsForHierarchy:(id)arg1;
+ (id)_axAuditGetAttrLabelFromSwiftUIView:(id)arg1;
+ (id)_axAuditGetCellReferenceMapTable;
+ (id)_axAuditGetFontAttrFromAttributedString:(id)arg1;
+ (id)_axAuditGetFontForElement:(id)arg1;
+ (id)_axAuditGetFontForSwiftUIView:(id)arg1;
+ (id)_axAuditGetIndexPathsDictionaryForCaptureActionForView:(id)arg1;
+ (id)_axAuditGetIndexPathsDictionaryForUpdateActionForView:(id)arg1;
+ (id)_axAuditGetOriginalContentOffsetForView:(id)arg1;
+ (id)_axAuditGetTextFromObject:(id)arg1;
+ (id)_axAuditHelperToFindRelevantSubviewsOfCellView:(id)arg1;
+ (id)_axAuditMatchReferenceSubviews:(id)arg1 againstNewSubviews:(id)arg2;
+ (void)_axAuditRemoveUIViewsFromArray:(id)arg1 usingFilter:(id /* block */)arg2;
+ (void)_axAuditRemoveUnsupportedCategories:(id)arg1;
+ (bool)_axAuditSetSwizzledImp:(int (*)arg1 orOrigImp:(int (*)arg2 forMethod:(struct objc_method { }*)arg3 withSwizzling:(bool)arg4;
+ (bool)_axAuditShouldElementBeCheckedForClipping:(id)arg1;
+ (void)_axAuditSpinRunloopForDuration:(double)arg1;
+ (void)_axAuditStoreClippedElementsIntoSet:(id)arg1 forReferenceMatches:(id)arg2;
+ (void)_axAuditStoreFontForElement:(id)arg1 intoDictionary:(id)arg2 forCurrentFont:(id)arg3;
+ (void)_axAuditStoreFontForSwiftUIView:(id)arg1 intoDictionary:(id)arg2 forCurrentFont:(id)arg3;
+ (void)_axAuditStoreFontsIntoDictionary:(id)arg1 forReferenceMatches:(id)arg2;
+ (bool)_axAuditSwiftUIViewHasText:(id)arg1;
+ (bool)_axAuditSwiftUIViewIsClipping:(id)arg1;
+ (bool)_axAuditSwizzleAwayContentSize:(bool)arg1;
+ (void)_axAuditUIKitShouldReportFontSize:(id)arg1;
+ (id)_axAuditUnlabeledIssueDictForElement:(id)arg1 honorsGroups:(bool)arg2;
+ (void)_axAuditUpdateClippingStatusForReferenceMatches:(id)arg1;
+ (void)_axAuditUpdateFontsForReferenceMatches:(id)arg1 forFontSize:(id)arg2;
+ (void)_axAuditUpdateReferenceOfCellsForViewHierarchy:(id)arg1 forFontSize:(id)arg2;
+ (void)_axAuditUpdateRowHeightForTableAndCollectionViewsOfElements:(id)arg1;
+ (bool)_axAuditViewIsSwiftUI:(id)arg1;

@end
