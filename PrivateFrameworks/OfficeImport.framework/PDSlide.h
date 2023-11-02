
@interface PDSlide : PDSlideChild {
    OITSUNoCopyDictionary * mCommentParents;
    NSMutableArray * mComments;
    PDNotesSlide * mNotesSlide;
    PDSlideLayout * mSlideLayout;
}

@property (retain) OITSUNoCopyDictionary *commentParents;

- (void).cxx_destruct;
- (void)addComment:(id)arg1;
- (id)background;
- (id)commentAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentCount;
- (id)commentForAuthorId:(unsigned long long)arg1 authorIdx:(unsigned long long)arg2;
- (id)commentParents;
- (id)defaultTheme;
- (id)description;
- (void)doneWithContent;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)notesSlide;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (void)removeUnnecessaryOverrides;
- (void)setCommentParents:(id)arg1;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (void)setNotesSlide:(id)arg1;
- (void)setSlideLayout:(id)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideLayout;
- (id)transition;

@end