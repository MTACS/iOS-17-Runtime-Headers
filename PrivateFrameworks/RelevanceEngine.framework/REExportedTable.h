
@interface REExportedTable : NSObject {
    NSMutableArray * _data;
    NSArray * _header;
    bool  _sortable;
}

@property (nonatomic, retain) NSArray *header;
@property (nonatomic, readonly) unsigned long long rowsCount;
@property (nonatomic) bool sortable;

- (void).cxx_destruct;
- (void)addRow:(id)arg1;
- (id)header;
- (id)init;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowsCount;
- (void)setHeader:(id)arg1;
- (void)setSortable:(bool)arg1;
- (bool)sortable;

@end
