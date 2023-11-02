
@interface PUSearchDisplayUtility : NSObject

+ (id)applyCornerMaskToCell:(id)arg1 roundedCornerType:(long long)arg2;
+ (unsigned long long)cornerMaskForCell:(id)arg1 roundedCornerType:(long long)arg2;
+ (id)genericCellFromCell:(id)arg1 roundedCornerType:(long long)arg2;
+ (id)genericSuggestionsCellFont;
+ (id)genericSuggestionsTitleCellFont;
+ (bool)hasLimitedScreenSize;
+ (bool)indexPathIsFirstRowInSection:(id)arg1 tableView:(id)arg2;
+ (bool)indexPathIsLastRowInSection:(id)arg1 tableView:(id)arg2;

@end
