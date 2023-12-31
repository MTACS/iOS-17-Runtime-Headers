
@interface TSTCellRegion : NSObject <NSCopying> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mBottomRightCellID;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mBoundingCellRange;
    unsigned long long  mCellCount;
    struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } * mCellRanges;
    unsigned long long  mCellRangesCount;
    NSIndexSet * mIntersectingColumnsIndexSet;
    NSIndexSet * mIntersectingRowsIndexSet;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mUpperLeftCellID;
}

@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } bottomRightCellID;
@property (nonatomic, readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } boundingCellRange;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isRectangle;
@property (nonatomic, readonly) unsigned short numberOfIntersectingColumns;
@property (nonatomic, readonly) unsigned short numberOfIntersectingRows;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } upperLeftCellID;

+ (id)invalidRegion;
+ (id)region:(id)arg1 addingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)region:(id)arg1 addingRegion:(id)arg2;
+ (id)region:(id)arg1 intersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)region:(id)arg1 subtractingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;
+ (id)regionFillingColumnsFromRegion:(id)arg1;
+ (id)regionFillingRowsFromRegion:(id)arg1;
+ (id)regionFromCellMap:(id)arg1;
+ (id)regionFromColumnIndices:(id)arg1;
+ (id)regionFromRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
+ (id)regionFromRowIndices:(id)arg1;
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;

- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })bottomRightCellID;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })boundingCellRange;
- (unsigned long long)cellCount;
- (bool)containsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)containsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)containsCellRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateCellIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateCellRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateColumnRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateColumnsUsingBlock:(id /* block */)arg1;
- (void)enumerateInDirection:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRowRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateRowsUsingBlock:(id /* block */)arg1;
- (bool)equalsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)equalsCellRegion:(id)arg1;
- (void)fillCellRangeColMajorSet:(void*)arg1 leftToRight:(bool)arg2;
- (void)fillCellRangeRowMajorSet:(void*)arg1 leftToRight:(bool)arg2;
- (id)init;
- (id)intersectingColumnsIndexSet;
- (id)intersectingRowsIndexSet;
- (bool)intersectsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)intersectsColumn:(unsigned char)arg1;
- (bool)intersectsRow:(unsigned short)arg1;
- (bool)isEmpty;
- (bool)isRectangle;
- (bool)isValid;
- (id)iterator;
- (unsigned short)numberOfIntersectingColumns;
- (unsigned short)numberOfIntersectingRows;
- (void)p_calculateAncillaryInformation;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateIntersectingRows;
- (void)p_calculateUpperLeftAndBottomRightCellID;
- (void)p_insertRangeIntoRegion:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)partiallyIntersectsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionByAddingColumns:(id)arg1;
- (id)regionByAddingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRows:(id)arg1;
- (id)regionByApplyingRowMapping:(id)arg1;
- (id)regionByIntersectingColumnIndices:(id)arg1;
- (id)regionByIntersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionByIntersectingRowIndices:(id)arg1;
- (id)regionByRemovingColumns:(id)arg1;
- (id)regionByRemovingRows:(id)arg1;
- (id)regionBySubtractingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionBySubtractingRegion:(id)arg1;
- (id)regionByUnioningEveryRangeInRegionWithRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionOffsetBy:(struct { int x1; int x2; })arg1;
- (id)rightToLeftIterator;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })suitableAnchor;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })suitableCursor;
- (id)topToBottomIterator;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })upperLeftCellID;

@end
