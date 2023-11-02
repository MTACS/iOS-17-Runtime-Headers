
@interface __HMFMobileGestaltDataSource : HMFObject <HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoNameDataSource, HMFSystemInfoProductColorDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource> {
    HMFMACAddress * _WiFiInterfaceMACAddress;
    <HMFSystemInfoNameDataSourceDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _model;
    NSString * _modelIdentifier;
    NSString * _name;
    struct MGNotificationTokenStruct { } * _notificationToken;
    long long  _productClass;
    long long  _productColor;
    long long  _productPlatform;
    long long  _productVariant;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _regionInfo;
    NSString * _serialNumber;
    HMFSoftwareVersion * _softwareVersion;
    bool  _supportsBLE;
}

@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly, copy) NSString *debugDescription;
@property <HMFSystemInfoNameDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *modelIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) struct MGNotificationTokenStruct { }*notificationToken;
@property (nonatomic, readonly) long long productClass;
@property (readonly) long long productColor;
@property (nonatomic, readonly) long long productPlatform;
@property (nonatomic, readonly) long long productVariant;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) NSString *regionInfo;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (readonly) bool supportsBLE;

- (void).cxx_destruct;
- (id)WiFiInterfaceMACAddress;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)model;
- (id)modelIdentifier;
- (id)name;
- (struct MGNotificationTokenStruct { }*)notificationToken;
- (long long)productClass;
- (long long)productColor;
- (long long)productPlatform;
- (long long)productVariant;
- (id)queue;
- (id)regionInfo;
- (id)serialNumber;
- (void)setDelegate:(id)arg1;
- (bool)shouldFetchProtectedKey:(id)arg1;
- (bool)shouldFetchUserAssignedDeviceName;
- (id)softwareVersion;
- (bool)supportsBLE;

@end
