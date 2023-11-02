
@interface _UISectionFocusContainerGuidePackage : NSObject {
    NSArray * _focusGuides;
    _UIFocusCollectionViewSectionContainerGuide * _sectionEndFocusGuide;
    _UIFocusCollectionViewSectionContainerGuide * _sectionFocusGuide;
}

@property (nonatomic, readonly) NSArray *focusGuides;
@property (nonatomic, retain) _UIFocusCollectionViewSectionContainerGuide *sectionEndFocusGuide;
@property (nonatomic, retain) _UIFocusCollectionViewSectionContainerGuide *sectionFocusGuide;

- (void).cxx_destruct;
- (void)_updateFocusGuidesArray;
- (id)focusGuides;
- (id)sectionEndFocusGuide;
- (id)sectionFocusGuide;
- (void)setSectionEndFocusGuide:(id)arg1;
- (void)setSectionFocusGuide:(id)arg1;

@end
