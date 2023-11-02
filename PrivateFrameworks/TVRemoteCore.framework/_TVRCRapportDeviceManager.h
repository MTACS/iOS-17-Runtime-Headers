
@interface _TVRCRapportDeviceManager : NSObject {
    NSMutableDictionary * _deviceRecords;
}

@property (nonatomic, retain) NSMutableDictionary *deviceRecords;

- (void).cxx_destruct;
- (void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)arg1 device:(id)arg2;
- (id)_identifierForDevice:(id)arg1;
- (bool)createOrUpdateRecordForDevice:(id)arg1;
- (id)description;
- (id)deviceRecords;
- (id)init;
- (id)recordForDevice:(id)arg1;
- (bool)removeDeviceRecordForDevice:(id)arg1;
- (void)setDeviceRecords:(id)arg1;

@end
