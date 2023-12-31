
@interface EDComment : NSObject {
    EDString * _author;
    int  _columnIndex;
    int  _rowIndex;
    bool  _visible;
}

@property (nonatomic, retain) EDString *author;
@property (nonatomic) int columnIndex;
@property (nonatomic) int rowIndex;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)author;
- (int)columnIndex;
- (id)description;
- (int)rowIndex;
- (void)setAuthor:(id)arg1;
- (void)setColumnIndex:(int)arg1;
- (void)setRowIndex:(int)arg1;
- (void)setVisible:(bool)arg1;
- (bool)visible;

@end
