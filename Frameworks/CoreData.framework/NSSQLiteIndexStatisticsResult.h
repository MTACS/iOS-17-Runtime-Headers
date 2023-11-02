
@interface NSSQLiteIndexStatisticsResult : NSPersistentStoreResult {
    id  _result;
}

@property (readonly) id result;

- (void)dealloc;
- (id)initWithResult:(id)arg1;
- (id)initWithSubresults:(id)arg1;
- (id)result;

@end
