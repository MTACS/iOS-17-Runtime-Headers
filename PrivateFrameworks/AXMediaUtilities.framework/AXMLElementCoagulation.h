
@interface AXMLElementCoagulation : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _appFrame;
    long long  _appOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    NSArray * _clickableTextKeywords;
    bool  _isRTL;
    bool  _isiPad;
    NSRegularExpression * _nonAlphaCharactersRegex;
    double  _screenScale;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } appFrame;
@property (nonatomic) long long appOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, retain) NSArray *clickableTextKeywords;
@property (nonatomic) bool isRTL;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) NSRegularExpression *nonAlphaCharactersRegex;
@property (nonatomic) double screenScale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_allTabGroupsHaveSingleSubfeature:(id)arg1;
- (id)_applyCrossUITypeNMS:(id)arg1;
- (id)_applyHorizontalMirrorToFeatures:(id)arg1;
- (id)_compareArea:(id)arg1;
- (id)_compareForX:(id)arg1;
- (id)_compareForY:(id)arg1;
- (long long)_compareX:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frame2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_compareY:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frame2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_createToggleGroup:(id)arg1 toGroup:(id)arg2;
- (id)_featuresByReorderingTwoRows:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (id)_flattenFeatures:(id)arg1;
- (id)_getAXMLElementGroupsForFeatures:(id)arg1;
- (id)_getCandidateTabBarFeatures:(id)arg1 screenSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_getClickableTextButtons:(id)arg1;
- (id)_getClosestDetectionBelow:(id)arg1 target:(id)arg2 maxDistance:(long long)arg3;
- (id)_getFeaturesForAXMLTabButtonGroups:(id)arg1;
- (id)_getFlattenedChildFeatures:(id)arg1;
- (id)_getGroupedPictureAndSubtitleFeature:(id)arg1;
- (id)_getGroupedSegmentedControlFeatures:(id)arg1;
- (id)_getGroupedTabBarFeatures:(id)arg1;
- (id)_getGroupedTextButtonFeatures:(id)arg1;
- (id)_getGroupedTextFeatures:(id)arg1;
- (id)_getGroupedTextFields:(id)arg1;
- (id)_getGroupedToggleCheckboxWithText:(id)arg1;
- (id)_getHorizontalSegmentationPointDict:(id)arg1;
- (id)_getTabGroupSubfeatureUIClassTypes:(id)arg1;
- (id)_getTopLevelFeatureGroups:(id)arg1;
- (double)_getXOverlap:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 obj2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_getYOverlap:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 obj2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_groupFeatures:(id)arg1;
- (id)_groupFeaturesByContainment:(id)arg1;
- (id)_groupSingleContainerAsButton:(id)arg1 featureToGroup:(id)arg2;
- (bool)_hasXOverlap:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 obj2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_hasYOverlap:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 obj2:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_improveFeatureFrames:(id)arg1;
- (bool)_isInTopBar:(id)arg1;
- (void)_mergeFeatureIntoGroup:(id)arg1 feature:(id)arg2;
- (id)_mergeTopLeftButton:(id)arg1;
- (id)_removeExtraOCRAndIconFromTextField:(id)arg1;
- (void)_removeFeatureFromGroup:(id)arg1 feature:(id)arg2;
- (id)_removeTextContainingOnlyToggles:(id)arg1 toggleCheckboxTypes:(id)arg2;
- (id)_reorderByXCut:(id)arg1;
- (id)_reorderByYCut:(id)arg1;
- (id)_reorderSimilarTopNeighbors:(id)arg1;
- (id)_reorderedTabsForSortedFeatures:(id)arg1 screenSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_repairTextInTabItems:(id)arg1;
- (bool)_shouldBeTabBar:(bool)arg1 groupedTabButtons:(id)arg2;
- (id)_sortFeaturesReadingOrder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })appFrame;
- (long long)appOrientation;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)clickableTextKeywords;
- (id)coagulateElements:(id)arg1;
- (id)init;
- (bool)isRTL;
- (bool)isiPad;
- (id)nonAlphaCharactersRegex;
- (double)screenScale;
- (void)setAppFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAppOrientation:(long long)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setClickableTextKeywords:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setNonAlphaCharactersRegex:(id)arg1;
- (void)setScreenScale:(double)arg1;

@end
