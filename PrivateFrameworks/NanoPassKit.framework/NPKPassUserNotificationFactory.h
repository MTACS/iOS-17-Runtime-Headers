
@interface NPKPassUserNotificationFactory : NSObject {
    <NPKPassUserNotificationFactoryDataSource> * _dataSource;
}

@property (nonatomic) <NPKPassUserNotificationFactoryDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)passNotificationWithType:(unsigned long long)arg1 passUniqueID:(id)arg2;
- (void)setDataSource:(id)arg1;

@end
