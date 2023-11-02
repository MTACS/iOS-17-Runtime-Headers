
@interface CNContactListStyleApplier : NSObject {
    <CNContactListStyle> * _contactListStyle;
}

@property (nonatomic, readonly) double cellEstimatedHeight;
@property (nonatomic, readonly) <CNContactListStyle> *contactListStyle;
@property (nonatomic, readonly) unsigned long long tableNoContactsAvailableStyle;
@property (nonatomic, readonly) bool usesInsetPlatterStyle;

+ (void)applyDefaultContactListStyleToHeaderFooter:(id)arg1 withTitle:(id)arg2 isRTL:(bool)arg3;
+ (void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;

- (void).cxx_destruct;
- (void)applyCellSeparatorInsetStyleToConfiguration:(id)arg1 superviewDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 itemWantsFullLengthBottomSeparator:(bool)arg3;
- (void)applyContactListDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 toLayoutSection:(id)arg2 collectionViewIsShowingIndexBar:(bool)arg3;
- (void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(bool)arg2;
- (void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(bool)arg2;
- (void)applyContactListStyleToCell:(id)arg1;
- (void)applyContactListStyleToCollectionLayoutConfiguration:(id)arg1;
- (void)applyContactListStyleToCollectionView:(id)arg1;
- (void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;
- (void)applyContactListStyleToContentConfiguration:(id)arg1 usingState:(id)arg2 forCell:(id)arg3;
- (void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2;
- (void)applyContactListStyleToHeaderFooter:(id)arg1 withTitle:(id)arg2 isRTL:(bool)arg3;
- (void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2;
- (void)applyContactListStyleToNavigationBar:(id)arg1;
- (void)applyContactListStyleToSearchBar:(id)arg1;
- (void)applyContactListStyleToSearchCell:(id)arg1;
- (void)applyContactListStyleToSearchHeader:(id)arg1 withTitle:(id)arg2;
- (void)applyContactListStyleToSubtitleText:(id)arg1 ofSearchResultCell:(id)arg2;
- (void)applyEditingStateBackgroundConfigurationToCell:(id)arg1;
- (void)applySubtitleTextColorsToSearchCellContentConfiguration:(id)arg1 withSubtitleText:(id)arg2 forSelectedState:(bool)arg3;
- (void)applyTextColorsToContentConfiguration:(id)arg1 usingState:(id)arg2;
- (id)attributedString:(id)arg1 foregroundColor:(id)arg2;
- (double)cellEstimatedHeight;
- (id)contactListStyle;
- (id)defaultListContentConfiguration;
- (id)initWithContactListStyle:(id)arg1;
- (unsigned long long)tableNoContactsAvailableStyle;
- (bool)usesInsetPlatterStyle;

@end
