
@interface __NSTextSelectionLineFragmentInfo : NSObject {
    long long  _baseDirection;
    struct { double x1; id x2; id x3; bool x4; bool x5; } * _carets;
    NSTextSelectionNavigation * _navigation;
    unsigned long long  _numberOfCarets;
    long long  _offset;
    NSArray * _otherLocations;
    NSMapTable * _primaryLocationTable;
    NSMapTable * _secondaryLocationTable;
    NSArray * _sortedLocations;
    NSTextRange * _textRange;
    int  _visualDirection;
}

@property (getter=isMonotonicDirection, readonly) bool monotonicDirection;
@property long long numberOfCaretPositions;
@property (readonly) NSTextRange *textRange;
@property (readonly) NSTextSelectionNavigation *textSelectionNavigation;

- (long long)_baseWritingDirection;
- (void)_cache;
- (void)_computeVisualDirection;
- (void)_fetchCaretOffsets;
- (id)_findNextCaretLocationForLocation:(id)arg1;
- (void)_invalidateSortedLocations;
- (id)_locationForEdgeCaretAtIndex:(unsigned long long)arg1 leftEdge:(bool)arg2;
- (void)_resolveTrailingEdges;
- (id)_secondaryLocationTable;
- (long long)_sortedLocationIndexForLocation:(id)arg1;
- (id)_sortedLocations;
- (long long)caretIndexForEdgeLocationInTextRanges:(id)arg1 leftEdge:(bool)arg2;
- (long long)caretIndexForLocation:(id)arg1 inTextRanges:(id)arg2 secondaryCaretIndex:(long long*)arg3;
- (long long)caretIndexForPrimaryLocation:(id)arg1;
- (long long)caretIndexForSecondaryLocation:(id)arg1;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)caretPositionAtIndex:(long long)arg1;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)caretPositionClosestToLocation:(id)arg1 visualDirection:(long long)arg2 matchLocation:(out bool*)arg3;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)caretPositionClosestToOffset:(double)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithTextSelectionNavigation:(id)arg1 range:(id)arg2;
- (bool)isMonotonicDirection;
- (bool)location:(id)arg1 isLeading:(out bool*)arg2 trailing:(out bool*)arg3 inTextRanges:(id)arg4;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)logicalFirstCaret;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)logicalLastCaret;
- (long long)numberOfCaretPositions;
- (double)offsetForLocation:(id)arg1;
- (id)rangesBetweenStartingOffset:(double)arg1 endOffset:(double)arg2 continuous:(bool)arg3;
- (id)textRange;
- (id)textRangeOfCharacterAtOffset:(double)arg1 fractionOfDistanceThroughGlyph:(double*)arg2;
- (id)textSelectionNavigation;

@end
