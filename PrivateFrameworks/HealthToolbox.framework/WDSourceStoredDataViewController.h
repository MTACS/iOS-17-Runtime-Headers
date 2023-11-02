
@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController {
    HKSource * _source;
}

@property (nonatomic, retain) HKSource *source;
@property (nonatomic, readonly) bool sourceHasData;
@property (nonatomic, readonly) bool sourceIsInstalled;

- (void).cxx_destruct;
- (void)deleteAllSourceData;
- (void)deleteAllStoredData;
- (void)deleteSource;
- (void)setSource:(id)arg1;
- (bool)shouldShowDeleteAllDataButton;
- (id)source;
- (bool)sourceHasData;
- (bool)sourceIsInstalled;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end
