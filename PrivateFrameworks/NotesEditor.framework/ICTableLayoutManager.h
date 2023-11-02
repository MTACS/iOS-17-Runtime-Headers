
@interface ICTableLayoutManager : NSObject <ICAvailableTableWidthProviding> {
    NSMutableDictionary * _columnLayoutManagers;
    ICTableColumnWidthManager * _columnWidthManager;
    NSObject<ICAvailableTableWidthProviding> * _delegate;
    double  _emptyCellLineHeight;
    double  _emptyCellLineSpacing;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    NSMutableDictionary * _rowPositions;
    ICTable * _table;
}

@property (nonatomic, readonly) double availableWidth;
@property (readonly) NSMutableDictionary *columnLayoutManagers;
@property (readonly) ICTableColumnWidthManager *columnWidthManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<ICAvailableTableWidthProviding> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double emptyCellHeight;
@property double emptyCellLineHeight;
@property double emptyCellLineSpacing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic, readonly) NSMutableDictionary *rowPositions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICTable *table;

- (void).cxx_destruct;
- (double)availableWidth;
- (id)columnLayoutManagerForColumn:(id)arg1;
- (id)columnLayoutManagers;
- (id)columnWidthManager;
- (id)delegate;
- (double)emptyCellHeight;
- (double)emptyCellLineHeight;
- (double)emptyCellLineSpacing;
- (id)highlightPatternRegexFinder;
- (id)initWithTable:(id)arg1 delegate:(id)arg2;
- (void)removeColumnLayoutManagerForColumn:(id)arg1;
- (id)rowPositions;
- (void)setEmptyCellLineHeight:(double)arg1;
- (void)setEmptyCellLineSpacing:(double)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setYPosition:(double)arg1 forRow:(id)arg2 shouldInvalidate:(bool)arg3;
- (id)table;
- (void)updateForMovedRow:(id)arg1;

@end
