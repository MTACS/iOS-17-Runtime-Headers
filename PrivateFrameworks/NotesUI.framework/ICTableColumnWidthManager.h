
@interface ICTableColumnWidthManager : NSObject {
    NSMutableDictionary * _cachedActualColumnWidths;
    NSMutableDictionary * _cachedIdealColumnWidths;
    NSMutableDictionary * _cachedMinimumColumnWidths;
    NSObject<ICAvailableTableWidthProviding> * _delegate;
    ICTextController * _styler;
    ICTable * _table;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedActualColumnWidths;
@property (nonatomic, readonly) NSMutableDictionary *cachedIdealColumnWidths;
@property (nonatomic, readonly) NSMutableDictionary *cachedMinimumColumnWidths;
@property (nonatomic, readonly) NSObject<ICAvailableTableWidthProviding> *delegate;
@property (nonatomic, readonly) double singleColumnTableWidth;
@property (nonatomic, readonly) ICTextController *styler;
@property (nonatomic, readonly) ICTable *table;

- (void).cxx_destruct;
- (id)cachedActualColumnWidths;
- (id)cachedIdealColumnWidths;
- (id)cachedMinimumColumnWidths;
- (double)calculateIdealWidthOfColumn:(id)arg1;
- (double)comfortableColumnWidth;
- (double)comfortableNumberOfColumnsOnscreen;
- (id)delegate;
- (id)initWithTable:(id)arg1 delegate:(id)arg2;
- (id)invalidateAvailableWidth;
- (id)invalidateWidthForColumns:(id)arg1;
- (id)recalculateActualWidths;
- (double)singleColumnTableWidth;
- (id)styler;
- (id)table;
- (double)widthOfColumn:(id)arg1;

@end
