
@interface TSTCellStateForLayout : NSObject {
    TSTCell * mCell;
    id  mCellContents;
    bool  mCellPropsRowHeight;
    bool  mCellWraps;
    bool  mForDrawing;
    bool  mInDynamicLayout;
    TSTLayoutContentCachedKey * mKeyVal;
    int  mLayoutCacheFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  mMaxSize;
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
    }  mMergedRange;
    struct CGSize { 
        double width; 
        double height; 
    }  mMinSize;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mModelCellID;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mPaddingInsets;
    unsigned long long  mPageCount;
    unsigned long long  mPageNumber;
    unsigned int  mVerticalAlignment;
    TSWPColumn * mWPColumn;
}

@property (nonatomic, copy) TSTCell *cell;
@property (nonatomic, retain) id cellContents;
@property (nonatomic) bool cellPropsRowHeight;
@property (nonatomic) bool cellWraps;
@property (nonatomic) bool forDrawing;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic) bool inDynamicLayout;
@property (nonatomic, retain) TSTLayoutContentCachedKey *keyVal;
@property (nonatomic) int layoutCacheFlags;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } mergedRange;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } modelCellID;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingInsets;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) unsigned int verticalAlignment;
@property (nonatomic, retain) TSWPColumn *wpColumn;

- (id)cell;
- (id)cellContents;
- (bool)cellPropsRowHeight;
- (bool)cellWraps;
- (void)dealloc;
- (bool)forDrawing;
- (bool)hasContent;
- (bool)inDynamicLayout;
- (id)init;
- (id)keyVal;
- (int)layoutCacheFlags;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRange;
- (struct CGSize { double x1; double x2; })minSize;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })modelCellID;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingInsets;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (void)setCell:(id)arg1;
- (void)setCellContents:(id)arg1;
- (void)setCellPropsRowHeight:(bool)arg1;
- (void)setCellWraps:(bool)arg1;
- (void)setForDrawing:(bool)arg1;
- (void)setInDynamicLayout:(bool)arg1;
- (void)setKeyVal:(id)arg1;
- (void)setLayoutCacheFlags:(int)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMergedRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModelCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setPaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageCount:(unsigned long long)arg1;
- (void)setPageNumber:(unsigned long long)arg1;
- (void)setVerticalAlignment:(unsigned int)arg1;
- (void)setWpColumn:(id)arg1;
- (unsigned int)verticalAlignment;
- (id)wpColumn;

@end
