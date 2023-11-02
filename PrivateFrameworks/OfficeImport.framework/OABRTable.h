
@interface OABRTable : NSObject {
    void * mCells;
    int  mColumnCount;
    void * mHorzLines;
    int  mRowCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  mScale;
    ESDContainer * mSrcTable;
    OABReaderState * mState;
    OADTable * mTgtTable;
    void * mVertLines;
    OABTableSortedIntArray * mXCoords;
    OABTableSortedIntArray * mYCoords;
}

- (void).cxx_destruct;
- (void)createTargetTableContents;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;
- (void)map;
- (void)mapScale;
- (void)readAnchor;
- (void)readCellsAndLines;
- (void)readCoordinates;
- (id)readStrokeFromShape:(void*)arg1;
- (void)validateTable;

@end
