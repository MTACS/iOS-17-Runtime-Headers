
@interface PDNotesMaster : PDSlideBase {
    OADColorMap * mColorMap;
    OADTextListStyle * mNotesTextStyle;
    OADTheme * mTheme;
}

- (void).cxx_destruct;
- (id)colorMap;
- (id)colorScheme;
- (id)defaultTextListStyle;
- (id)description;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)fontScheme;
- (id)init;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)notesTextStyle;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)styleMatrix;
- (id)theme;

@end
