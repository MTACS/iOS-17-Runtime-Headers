
@interface UIAccessibilityElementTraversalOptions : NSObject {
    NSArray * _allowedElementsForTraversal;
    id /* block */  _alternateViewChildrenHandler;
    long long  _direction;
    bool  _forSpeakScreen;
    bool  _honorsElementGrouping;
    bool  _includeAncestorsOfSelfInSiblingMatch;
    bool  _includeHiddenViews;
    bool  _includeWindowlessViews;
    id /* block */  _leafNodePredicate;
    bool  _shouldExcludeSupplementaryViews;
    bool  _shouldIncludeKeyboardObscuredElements;
    bool  _shouldIncludeStatusBarWindow;
    bool  _shouldOnlyIncludeElementsWithVisibleFrame;
    bool  _shouldReturnScannerGroups;
    bool  _shouldUseAllSubviews;
    bool  _sorted;
}

@property (nonatomic, retain) NSArray *allowedElementsForTraversal;
@property (nonatomic, copy) id /* block */ alternateViewChildrenHandler;
@property (nonatomic) long long direction;
@property (nonatomic) bool forSpeakScreen;
@property (nonatomic) bool honorsElementGrouping;
@property (nonatomic) bool includeAncestorsOfSelfInSiblingMatch;
@property (nonatomic) bool includeHiddenViews;
@property (nonatomic) bool includeWindowlessViews;
@property (nonatomic, copy) id /* block */ leafNodePredicate;
@property (nonatomic) bool shouldExcludeSupplementaryViews;
@property (nonatomic) bool shouldIncludeKeyboardObscuredElements;
@property (nonatomic) bool shouldIncludeStatusBarWindow;
@property (nonatomic) bool shouldOnlyIncludeElementsWithVisibleFrame;
@property (nonatomic) bool shouldReturnScannerGroups;
@property (nonatomic) bool shouldUseAllSubviews;
@property (nonatomic) bool sorted;

+ (id)defaultFullKeyboardAccessOptions;
+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)defaultVoiceOverOptions;
+ (id)defaultVoiceOverOptionsHonoringGroups;
+ (id)options;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(bool)arg1 honorsGroups:(bool)arg2;

- (void).cxx_destruct;
- (id)allowedElementsForTraversal;
- (id /* block */)alternateViewChildrenHandler;
- (id)description;
- (long long)direction;
- (bool)forSpeakScreen;
- (bool)honorsElementGrouping;
- (bool)includeAncestorsOfSelfInSiblingMatch;
- (bool)includeHiddenViews;
- (bool)includeWindowlessViews;
- (id)init;
- (id /* block */)leafNodePredicate;
- (void)setAllowedElementsForTraversal:(id)arg1;
- (void)setAlternateViewChildrenHandler:(id /* block */)arg1;
- (void)setDirection:(long long)arg1;
- (void)setForSpeakScreen:(bool)arg1;
- (void)setHonorsElementGrouping:(bool)arg1;
- (void)setIncludeAncestorsOfSelfInSiblingMatch:(bool)arg1;
- (void)setIncludeHiddenViews:(bool)arg1;
- (void)setIncludeWindowlessViews:(bool)arg1;
- (void)setLeafNodePredicate:(id /* block */)arg1;
- (void)setShouldExcludeSupplementaryViews:(bool)arg1;
- (void)setShouldIncludeKeyboardObscuredElements:(bool)arg1;
- (void)setShouldIncludeStatusBarWindow:(bool)arg1;
- (void)setShouldOnlyIncludeElementsWithVisibleFrame:(bool)arg1;
- (void)setShouldReturnScannerGroups:(bool)arg1;
- (void)setShouldUseAllSubviews:(bool)arg1;
- (void)setSorted:(bool)arg1;
- (bool)shouldExcludeSupplementaryViews;
- (bool)shouldIncludeKeyboardObscuredElements;
- (bool)shouldIncludeStatusBarWindow;
- (bool)shouldOnlyIncludeElementsWithVisibleFrame;
- (bool)shouldReturnScannerGroups;
- (bool)shouldUseAllSubviews;
- (bool)sorted;

@end
