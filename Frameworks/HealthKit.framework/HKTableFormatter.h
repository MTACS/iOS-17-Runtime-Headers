
@interface HKTableFormatter : NSObject {
    NSArray * _columns;
    NSDateFormatter * _dateFormatter;
    NSString * _title;
    NSArray * _titles;
}

@property (nonatomic, readonly) long long rowCount;
@property (nonatomic, copy) NSString *title;

+ (id)formatterForCodableCondensedWorkouts;

- (void).cxx_destruct;
- (void)_appendColumn:(id)arg1 width:(long long)arg2 padding:(id)arg3 row:(id)arg4;
- (id)_columnWidths;
- (void)_enumerateFormattedRowsWithColumnWidths:(id)arg1 handler:(id /* block */)arg2;
- (id)_formattedTableHeaderForColumnWidths:(id)arg1;
- (void)appendEmptyRow;
- (void)appendHeterogenousRow:(id)arg1;
- (void)appendRow:(id)arg1;
- (void)appendWorkout:(id)arg1;
- (void)enumerateFormattedRows:(id /* block */)arg1;
- (id)formattedTable;
- (id)formattedTableHeader;
- (id)init;
- (id)initWithColumnTitles:(id)arg1;
- (long long)rowCount;
- (void)setTitle:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)stringFromDate:(id)arg1 fallback:(id)arg2;
- (id)stringFromTimeInterval:(double)arg1;
- (id)title;

@end
