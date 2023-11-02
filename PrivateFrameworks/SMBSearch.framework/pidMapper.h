
@interface pidMapper : NSObject {
    NSMutableArray * _colTableArr;
    unsigned int  _colValueLen;
    NSMutableArray * _columnSet;
    NSMutableArray * _pidMap;
    unsigned int  _rowLength;
}

@property (retain) NSMutableArray *colTableArr;
@property unsigned int colValueLen;
@property (retain) NSMutableArray *columnSet;
@property (retain) NSMutableArray *pidMap;
@property unsigned int rowLength;

- (void).cxx_destruct;
- (id)colTableArr;
- (unsigned int)colValueLen;
- (id)columnSet;
- (id)initWithCtx:(id)arg1;
- (id)pidMap;
- (unsigned int)rowLength;
- (void)setColTableArr:(id)arg1;
- (void)setColValueLen:(unsigned int)arg1;
- (void)setColumnSet:(id)arg1;
- (void)setPidMap:(id)arg1;
- (void)setRowLength:(unsigned int)arg1;

@end
