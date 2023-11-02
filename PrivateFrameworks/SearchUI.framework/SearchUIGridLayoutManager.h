
@interface SearchUIGridLayoutManager : NSObject {
    TLKGridLayoutManager * _gridManager;
    bool  _isCompactTable;
    NSMapTable * _tableMapping;
}

@property (nonatomic, retain) TLKGridLayoutManager *gridManager;
@property (nonatomic) bool isCompactTable;
@property (nonatomic, retain) NSMapTable *tableMapping;

+ (id)alignmentsForSFHeaderRow:(id)arg1;
+ (id)richTextForDataItems:(id)arg1;
+ (id)richTextForRichDataItems:(id)arg1;
+ (bool)shouldHideViewForRichData:(id)arg1;

- (void).cxx_destruct;
- (bool)computeCompactTableForSections:(id)arg1;
- (id)gridManager;
- (id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2;
- (bool)isCompactTable;
- (void)setGridManager:(id)arg1;
- (void)setIsCompactTable:(bool)arg1;
- (void)setTableMapping:(id)arg1;
- (id)tableMapping;
- (id)tableRowForTableRowCardSection:(id)arg1;

@end
