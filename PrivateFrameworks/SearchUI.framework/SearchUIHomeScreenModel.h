
@interface SearchUIHomeScreenModel : NSObject {
    SBHSelectedApplicationDataSource * _dataSource;
    SBHIconModel * _iconModel;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) SBHSelectedApplicationDataSource *dataSource;
@property (nonatomic, retain) SBHIconModel *iconModel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appIconForApplicationBundleIdentifier:(id)arg1;
- (id)clipIconForIdentifier:(id)arg1;
- (id)dataSource;
- (id)iconModel;
- (id)init;
- (void)resetIconModel;
- (id)serialQueue;
- (void)setDataSource:(id)arg1;
- (void)setIconModel:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
