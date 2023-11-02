
@interface SearchUI : NSObject

+ (id)cardViewControllerForCard:(id)arg1 feedbackDelegate:(id)arg2;
+ (id)cardViewControllerForCard:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (double)idealPlatterWidth;
+ (double)idealPlatterWidthForOrientation:(long long)arg1;
+ (id)reuseIdentifierForCardSection:(id)arg1;
+ (id)rowViewForResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (id)rowViewsForResults:(id)arg1 feedbackDelegate:(id)arg2;
+ (id)rowViewsForResults:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (bool)updateCardSectionView:(id)arg1 withCardSection:(id)arg2;
+ (id)viewForCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;
+ (id)viewsForCardSections:(id)arg1 feedbackListener:(id)arg2;
+ (id)viewsForCardSections:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;

@end
