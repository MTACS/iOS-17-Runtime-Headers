
@interface TSTTableHeaderInfo : NSObject {
    TSTCellStyle * mCellStyle;
    unsigned char  mHidingState;
    unsigned short  mNumberOfCells;
    double  mSize;
    TSWPParagraphStyle * mTextStyle;
}

@property (nonatomic, retain) TSTCellStyle *cellStyle;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned short numberOfCells;
@property (nonatomic) double size;
@property (nonatomic, retain) TSWPParagraphStyle *textStyle;

- (id)cellStyle;
- (void)dealloc;
- (id)description;
- (unsigned char)hidingState;
- (unsigned short)numberOfCells;
- (void)setCellStyle:(id)arg1;
- (void)setHidingState:(unsigned char)arg1;
- (void)setNumberOfCells:(unsigned short)arg1;
- (void)setSize:(double)arg1;
- (void)setTextStyle:(id)arg1;
- (double)size;
- (id)textStyle;

@end
