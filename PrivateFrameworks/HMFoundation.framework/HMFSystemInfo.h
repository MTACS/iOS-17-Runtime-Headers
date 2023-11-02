
@interface HMFSystemInfo : HMFObject <HMFSystemInfoMigrationDataSourceDelegate, HMFSystemInfoNameDataSourceDelegate> {
    <HMFSystemInfoWiFiDataSource> * _WiFiDataSource;
    <HMFSystemInfoBluetoothLEDataSource> * _bluetoothLEDataSource;
    <HMFSystemInfoMarketingInformationDataSource> * _marketingDataSource;
    <HMFSystemInfoMigrationDataSource> * _migrationDataSource;
    <HMFSystemInfoNameDataSource> * _nameDataSource;
    <HMFSystemInfoProductColorDataSource> * _productColorDataSource;
    <HMFSystemInfoProductInfoDataSource> * _productInfoDataSource;
    <HMFSystemInfoSerialNumberDataSource> * _serialNumberDataSource;
    <HMFSystemInfoSoftwareVersionDataSource> * _softwareVersionDataSource;
}

@property (nonatomic, readonly) <HMFSystemInfoWiFiDataSource> *WiFiDataSource;
@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
@property (nonatomic, readonly) <HMFSystemInfoBluetoothLEDataSource> *bluetoothLEDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMFSystemInfoMarketingInformationDataSource> *marketingDataSource;
@property (getter=isMigrating, readonly) bool migrating;
@property (nonatomic, readonly) <HMFSystemInfoMigrationDataSource> *migrationDataSource;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *modelIdentifier;
@property (readonly, copy) NSString *name;
@property (nonatomic, readonly) <HMFSystemInfoNameDataSource> *nameDataSource;
@property (readonly) long long productClass;
@property (readonly) long long productColor;
@property (nonatomic, readonly) <HMFSystemInfoProductColorDataSource> *productColorDataSource;
@property (nonatomic, readonly) <HMFSystemInfoProductInfoDataSource> *productInfoDataSource;
@property (readonly) long long productPlatform;
@property (readonly) long long productVariant;
@property (readonly, copy) NSString *regionInfo;
@property (readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly) <HMFSystemInfoSerialNumberDataSource> *serialNumberDataSource;
@property (readonly, copy) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, readonly) <HMFSystemInfoSoftwareVersionDataSource> *softwareVersionDataSource;
@property (readonly) Class superclass;
@property (readonly) bool supportsBLE;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)systemInfo;

- (void).cxx_destruct;
- (id)WiFiDataSource;
- (id)WiFiInterfaceMACAddress;
- (id)bluetoothLEDataSource;
- (void)dataSource:(id)arg1 didUpdateMigrating:(bool)arg2;
- (void)dataSource:(id)arg1 didUpdateName:(id)arg2;
- (bool)isMigrating;
- (id)marketingDataSource;
- (id)migrationDataSource;
- (id)model;
- (id)modelIdentifier;
- (id)name;
- (id)nameDataSource;
- (long long)productClass;
- (long long)productColor;
- (id)productColorDataSource;
- (id)productInfoDataSource;
- (long long)productPlatform;
- (long long)productVariant;
- (id)regionInfo;
- (id)serialNumber;
- (id)serialNumberDataSource;
- (id)softwareVersion;
- (id)softwareVersionDataSource;
- (bool)supportsBLE;

@end
