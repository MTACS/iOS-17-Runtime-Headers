
@interface MSVMarkdownTable : NSObject {
    NSMutableArray * _columnAlignments;
    NSMutableArray * _columnHeaders;
    NSMutableArray * _rows;
}

@property (nonatomic, readonly, copy) NSArray *columnHeaders;
@property (nonatomic, readonly, copy) NSArray *rows;

+ (id)escapedString:(id)arg1;

- (void).cxx_destruct;
- (id)_formatString:(id)arg1 withWidth:(long long)arg2 alignment:(long long)arg3;
- (void)addColumnWithHeader:(id)arg1;
- (void)addRow:(id)arg1;
- (long long)alignmentForColumnAtIndex:(long long)arg1;
- (id)cellAtColumn:(long long)arg1 row:(long long)arg2;
- (id)columnHeaders;
- (id)init;
- (void)insertColumnWithHeader:(id)arg1 atIndex:(long long)arg2;
- (void)insertRow:(id)arg1 atIndex:(long long)arg2;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (id)renderMarkdownWithOptions:(unsigned long long)arg1;
- (id)rows;
- (void)setAlignment:(long long)arg1 forColumnAtIndex:(long long)arg2;
- (void)setCell:(id)arg1 atColumn:(long long)arg2 row:(long long)arg3;

@end
