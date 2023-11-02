
@interface ICAttributionViewConfigurationSharedState : NSObject {
    UIImage * _collapsedDisclosureImage;
    UIImage * _expandedDisclosureImage;
    bool  _isRTL;
    ICNote * _note;
    NSDate * _noteLastOpenedDate;
    double  _panelWidth;
    UIFont * _primaryFont;
    id  _primaryFontStorage;
    UIFont * _secondaryFont;
    id  _secondaryFontStorage;
    ICBaseTextView * _textView;
    double  _topTextViewInset;
    NSMutableDictionary * _userIDToHighlightColor;
    NSMutableDictionary * _userIDToShortName;
}

@property (nonatomic, copy) UIImage *collapsedDisclosureImage;
@property (nonatomic, copy) UIImage *expandedDisclosureImage;
@property (nonatomic) bool isRTL;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, copy) NSDate *noteLastOpenedDate;
@property (nonatomic, readonly) ICTTTextStorage *noteTextStorage;
@property (nonatomic) double panelWidth;
@property (nonatomic, copy) UIFont *primaryFont;
@property (nonatomic, retain) id primaryFontStorage;
@property (nonatomic, copy) UIFont *secondaryFont;
@property (nonatomic, retain) id secondaryFontStorage;
@property (nonatomic, readonly) ICBaseTextView *textView;
@property (nonatomic) double topTextViewInset;
@property (nonatomic, retain) NSMutableDictionary *userIDToHighlightColor;
@property (nonatomic, retain) NSMutableDictionary *userIDToShortName;

- (void).cxx_destruct;
- (id)collapsedDisclosureImage;
- (id)disclosureImageWithSymbolName:(id)arg1;
- (id)expandedDisclosureImage;
- (id)highlightColorForUserID:(id)arg1;
- (id)initWithTextView:(id)arg1 note:(id)arg2;
- (bool)isRTL;
- (bool)isTimestampUnread:(id)arg1 forUserID:(id)arg2;
- (id)note;
- (id)noteLastOpenedDate;
- (id)noteTextStorage;
- (double)panelWidth;
- (id)primaryFont;
- (id)primaryFontStorage;
- (id)secondaryFont;
- (id)secondaryFontStorage;
- (void)setCollapsedDisclosureImage:(id)arg1;
- (void)setExpandedDisclosureImage:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setNoteLastOpenedDate:(id)arg1;
- (void)setPanelWidth:(double)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryFontStorage:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSecondaryFontStorage:(id)arg1;
- (void)setTopTextViewInset:(double)arg1;
- (void)setUserIDToHighlightColor:(id)arg1;
- (void)setUserIDToShortName:(id)arg1;
- (id)shortNameForUserID:(id)arg1;
- (void)synchronouslyLoadDataForEditGroups:(id)arg1;
- (id)textView;
- (double)topTextViewInset;
- (void)updateFontStorages;
- (void)updateFonts;
- (void)updateHighlightColorsForUserIDs:(id)arg1;
- (void)updateImages;
- (void)updateShortNamesForUserIDs:(id)arg1;
- (id)userIDToHighlightColor;
- (id)userIDToShortName;

@end
