
@interface TextColumn : NSObject {
    NSMutableArray * _mutableRows;
}

@property (nonatomic, retain) NSMutableArray *mutableRows;
@property (readonly) unsigned long long rowCount;
@property (nonatomic, readonly, retain) NSArray *rows;

- (void).cxx_destruct;
- (void)addRow:(id)arg1;
- (id)init;
- (id)initWithRows:(id)arg1;
- (id)mutableRows;
- (unsigned long long)rowCount;
- (id)rows;
- (void)setMutableRows:(id)arg1;
- (void)sortRowsInAscendingOrder;

@end
