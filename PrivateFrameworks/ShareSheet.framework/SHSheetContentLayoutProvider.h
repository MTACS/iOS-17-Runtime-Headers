
@interface SHSheetContentLayoutProvider : NSObject {
    <SHSheetContentLayoutDelegate> * _delegate;
    SHSheetContentLayoutSpec * _layoutSpec;
}

@property (nonatomic) <SHSheetContentLayoutDelegate> *delegate;
@property (nonatomic, readonly) SHSheetContentLayoutSpec *layoutSpec;

+ (id)_createFooterSupplementaryItemWithHeightDimension:(id)arg1;
+ (id)_createHeaderSupplementaryItemWithHeightDimension:(id)arg1;

- (void).cxx_destruct;
- (id)_createHorizontalLayoutSectionWithContext:(id)arg1 iconWidth:(double)arg2;
- (id)_layoutForActionsSectionWithContext:(id)arg1;
- (id)_layoutForAppsSectionWithContext:(id)arg1;
- (id)_layoutForCustomViewSectionWithContext:(id)arg1;
- (id)_layoutForHeroActionsSectionWithContext:(id)arg1;
- (id)_layoutForPeopleSectionWithContext:(id)arg1;
- (long long)_sectionForContext:(id)arg1;
- (id)delegate;
- (id)initWithLayoutSpec:(id)arg1;
- (id)layoutSectionForContext:(id)arg1;
- (id)layoutSpec;
- (void)setDelegate:(id)arg1;

@end
