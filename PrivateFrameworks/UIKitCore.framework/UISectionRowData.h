
@interface UISectionRowData : NSObject <NSCopying> {
    unsigned long long  _arrayLength;
    long long  _footerAlignment;
    double  _footerHeight;
    double  _footerOffset;
    long long  _headerAlignment;
    double  _headerHeight;
    double  _headerOffset;
    double  _maxFooterTitleWidth;
    double  _maxHeaderTitleWidth;
    unsigned long long  _numRows;
    UITableViewRowData * _rowData;
    float * _rowHeights;
    double * _rowOffsets;
    double  _sectionHeight;
    double  _sectionOffset;
    bool  _sectionOffsetValid;
    long long  _sectionRowOffset;
    bool  _valid;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;

@end
