
@interface CSLPRFAppTableCellHelper : NSObject {
    bool  _requestInProgress;
    PSTableCell * _tableCell;
}

- (void).cxx_destruct;
- (id)blankIcon;
- (id)getLazyIcon;
- (id)initWithTableCell:(id)arg1;

@end
