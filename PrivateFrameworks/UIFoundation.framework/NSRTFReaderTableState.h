
@interface NSRTFReaderTableState : NSObject {
    int  _currentColumn;
    int  _currentDefinitionColumn;
    int  _currentRow;
    NSMutableArray * _currentRowArray;
    bool  _currentRowIsLast;
    NSTextTable * _currentTable;
    NSMutableArray * _previousRowArray;
    NSTextTable * _previousTable;
}

- (void)dealloc;

@end
