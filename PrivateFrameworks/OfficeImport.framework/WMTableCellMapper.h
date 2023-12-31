
@interface WMTableCellMapper : CMMapper {
    unsigned int  mColSpan;
    double  mHeight;
    double  mLeftPadding;
    double  mRightPadding;
    WDTableCell * mWdTableCell;
    double  mWidth;
}

- (void).cxx_destruct;
- (unsigned int)colSpan;
- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapCellStyleAt:(id)arg1;
- (id)tableMapper;

@end
