
@interface SSAppPurchaseHistoryTransaction : NSObject {
    SSSQLiteDatabase * _database;
}

@property (nonatomic, readonly) SSSQLiteDatabase *database;

- (id)database;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
