
@interface EDCellIterator : NSObject {
    struct EDCellHeader { unsigned int x1; unsigned int x2; } * mCurrentCell;
    unsigned int  mCurrentCellIndex;
    EDRowBlock * mCurrentRowBlock;
    struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; } * mCurrentRowInfo;
    unsigned int  mCurrentRowInfoIndex;
    unsigned int  mDesiredColumnNumber;
    unsigned int  mDesiredRowNumber;
    EDRowBlocks * mRowBlocks;
}

- (void).cxx_destruct;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)adjacentCell:(int)arg1;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)adjacentCellLeft;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)adjacentCellRight;
- (void)dealloc;
- (id)initWithWorksheet:(id)arg1;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;

@end
