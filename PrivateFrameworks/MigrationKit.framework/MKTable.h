
@interface MKTable : NSObject {
    NSMutableArray * _columns;
    NSMutableArray * _rows;
}

@property (nonatomic, retain) NSMutableArray *columns;
@property (nonatomic, retain) NSMutableArray *rows;

- (void).cxx_destruct;
- (void)addRow:(id)arg1;
- (id)columns;
- (id)init;
- (id)rows;
- (void)setColumns:(id)arg1;
- (void)setRows:(id)arg1;
- (void)writeToDisk:(id)arg1;
- (void)writeToLog;

@end
