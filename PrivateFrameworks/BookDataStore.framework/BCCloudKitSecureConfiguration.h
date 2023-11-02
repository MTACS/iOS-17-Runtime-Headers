
@interface BCCloudKitSecureConfiguration : NSObject <BCContainerConfiguration> {
    NSString * _appBundleIdentifier;
    NSArray * _appZones;
    NSString * _containerIdentifier;
    NSString * _dbArchiveExtension;
    NSString * _dbArchiveFilename;
    NSString * _dbArchiveFolderName;
    NSString * _dbSubscriptionID;
    NSString * _queueIdentifier;
    bool  _requiresDeviceToDeviceEncryption;
    NSArray * _serviceZones;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSArray *appZones;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSString *dbArchiveExtension;
@property (nonatomic, retain) NSString *dbArchiveFilename;
@property (nonatomic, retain) NSString *dbArchiveFolderName;
@property (nonatomic, retain) NSString *dbSubscriptionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *queueIdentifier;
@property (nonatomic) bool requiresDeviceToDeviceEncryption;
@property (nonatomic, retain) NSArray *serviceZones;
@property (readonly) Class superclass;

+ (id)configuration;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)appZones;
- (id)containerIdentifier;
- (id)dbArchiveExtension;
- (id)dbArchiveFilename;
- (id)dbArchiveFolderName;
- (id)dbSubscriptionID;
- (id)queueIdentifier;
- (bool)requiresDeviceToDeviceEncryption;
- (id)serviceZones;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAppZones:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDbArchiveExtension:(id)arg1;
- (void)setDbArchiveFilename:(id)arg1;
- (void)setDbArchiveFolderName:(id)arg1;
- (void)setDbSubscriptionID:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRequiresDeviceToDeviceEncryption:(bool)arg1;
- (void)setServiceZones:(id)arg1;
- (bool)shouldArchiveData:(id)arg1;
- (bool)shouldPerformDatabaseSubscriptionForServiceMode:(bool)arg1;

@end
