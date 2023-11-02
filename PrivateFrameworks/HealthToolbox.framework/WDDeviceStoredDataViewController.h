
@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController {
    HKDevice * _device;
    NSString * _displayName;
}

@property (nonatomic, retain) HKDevice *device;
@property (nonatomic, retain) NSString *displayName;

- (void).cxx_destruct;
- (void)deleteAllStoredData;
- (id)device;
- (id)displayName;
- (void)setDevice:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (bool)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end
