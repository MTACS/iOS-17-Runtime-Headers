
@interface NSTextSelectionNavigation : NSObject {
    bool  _allowsNonContiguousRanges;
    __NSTextSelectionLineFragmentInfo * _lineFragmentInfoCache;
    long long  _multipleSelectionAnchor;
    bool  _rotatesCoordinateSystemForLayoutOrientation;
    bool  _supportsContainer;
    bool  _supportsLayoutOrientation;
    <NSTextSelectionDataSource> * _textSelectionDataSource;
}

@property bool allowsNonContiguousRanges;
@property bool rotatesCoordinateSystemForLayoutOrientation;
@property <NSTextSelectionDataSource> *textSelectionDataSource;
@property (readonly) <NSTextSelectionDataSourcePrivate> *textSelectionDataSourcePrivate;

+ (void)_setupCharacterSets;
+ (id)_substringRangeForEnumerationType:(unsigned long long)arg1 location:(id)arg2 dataSource:(id)arg3 string:(out id*)arg4 enclosingRange:(out id*)arg5;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_adjustLocationForNearestCaretPosition:(id)arg1 direction:(long long)arg2;
- (double)_anchorPositionOffsetForLocation:(id)arg1 textSelection:(id)arg2 affinity:(long long)arg3;
- (unsigned char)_bidiLevelAtLocation:(id)arg1 affinity:(long long)arg2;
- (double)_caretOffsetForTextLocation:(id)arg1 affinity:(long long)arg2;
- (id)_copyRangeForTextLineFragmentAtLocation:(id)arg1 affinity:(long long)arg2;
- (id)_copyRangeForTextLineFragmentAtLocation:(id)arg1 affinity:(long long)arg2 copyEnclosingRange:(out id*)arg3;
- (id)_findAnchorInfoForTextSelection:(id)arg1 anchorPositionOffset:(inout double*)arg2 anchorLocation:(out id*)arg3;
- (long long)_horizontalDirectionForDirection:(long long)arg1 location:(id)arg2;
- (id)_lineFragmentInfoForLocation:(id)arg1 affinity:(long long)arg2;
- (id)_lineFragmentInfoForPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 layoutOrientation:(long long)arg4 beforeLineFragment:(out bool*)arg5 afterLineFragment:(out bool*)arg6 lineFragmentRange:(out id*)arg7;
- (id)_lineFragmentInfoForRange:(id)arg1;
- (bool)_location:(id)arg1 withAffinity:(long long)arg2 isAtBoundaryOfDestination:(long long)arg3 onSide:(long long)arg4;
- (id)_logicalDestinationLocationForTextSelection:(id)arg1 originLocation:(id)arg2 direction:(long long)arg3 destination:(long long)arg4 extending:(bool)arg5 confined:(bool)arg6 affinity:(inout long long*)arg7;
- (long long)_logicalDirectionForDirection:(long long)arg1 textSelection:(id)arg2;
- (id)_rangeOfCombinedLineFragmentsInRanges:(id)arg1;
- (id)_rangesForSelectionStartingOffset:(double)arg1 inLineFragmentInfo:(id)arg2 endingOffset:(double)arg3 inLineFragmentInfo:(id)arg4 contiguous:(bool)arg5;
- (id)_rangesWithDirectionalFormatAdjustmentsForRanges:(id)arg1;
- (bool)_usesVisualBidiSelection;
- (id)_visualDestinationLocationForTextSelection:(id)arg1 originLocation:(inout id*)arg2 direction:(long long)arg3 destination:(long long)arg4 extending:(bool)arg5 confined:(bool)arg6 affinity:(inout long long*)arg7 crossedLine:(out bool*)arg8;
- (bool)allowsNonContiguousRanges;
- (void)dealloc;
- (id)deletionRangesForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 allowsDecomposition:(bool)arg4;
- (id)destinationForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 extending:(bool)arg4;
- (id)destinationForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 extending:(bool)arg4 confined:(bool)arg5;
- (id)destinationSelectionForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 extending:(bool)arg4 confined:(bool)arg5;
- (void)flushLayoutCache;
- (id)initWithDataSource:(id)arg1;
- (id)resolvedInsertionLocationForTextSelection:(id)arg1 writingDirection:(long long)arg2;
- (bool)rotatesCoordinateSystemForLayoutOrientation;
- (void)setAllowsNonContiguousRanges:(bool)arg1;
- (void)setRotatesCoordinateSystemForLayoutOrientation:(bool)arg1;
- (void)setTextSelectionDataSource:(id)arg1;
- (id)textSelectionDataSource;
- (id)textSelectionDataSourcePrivate;
- (id)textSelectionForSelectionGranularity:(long long)arg1 enclosingPoint:(struct CGPoint { double x1; double x2; })arg2 inContainerAtLocation:(id)arg3;
- (id)textSelectionForSelectionGranularity:(long long)arg1 enclosingPoint:(struct CGPoint { double x1; double x2; })arg2 inContainerAtLocation:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)textSelectionForSelectionGranularity:(long long)arg1 enclosingTextSelection:(id)arg2;
- (id)textSelectionsForPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2 anchors:(id)arg3 modifiers:(unsigned long long)arg4 selecting:(bool)arg5;
- (id)textSelectionsInteractingAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2 anchors:(id)arg3 modifiers:(unsigned long long)arg4 selecting:(bool)arg5;
- (id)textSelectionsInteractingAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id)arg2 anchors:(id)arg3 modifiers:(unsigned long long)arg4 selecting:(bool)arg5 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;

@end
