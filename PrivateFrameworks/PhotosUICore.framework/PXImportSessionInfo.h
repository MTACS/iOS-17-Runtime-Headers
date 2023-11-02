
@interface PXImportSessionInfo : NSObject {
    long long  _completedItemsCount;
    NSDate * _endDate;
    NSMutableArray * _errorItems;
    bool  _importComplete;
    bool  _importStopped;
    NSMutableArray * _importedItems;
    NSArray * _itemsToImport;
    NSDate * _startDate;
}

@property (nonatomic) long long completedItemsCount;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSMutableArray *errorItems;
@property (nonatomic) bool importComplete;
@property (nonatomic) bool importStopped;
@property (nonatomic, retain) NSMutableArray *importedItems;
@property (nonatomic, retain) NSArray *itemsToImport;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (long long)completedItemsCount;
- (id)endDate;
- (id)errorItems;
- (bool)importComplete;
- (bool)importStopped;
- (id)importedItems;
- (id)itemsToImport;
- (void)setCompletedItemsCount:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setErrorItems:(id)arg1;
- (void)setImportComplete:(bool)arg1;
- (void)setImportStopped:(bool)arg1;
- (void)setImportedItems:(id)arg1;
- (void)setItemsToImport:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
