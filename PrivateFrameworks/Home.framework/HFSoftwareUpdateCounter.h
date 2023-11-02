
@interface HFSoftwareUpdateCounter : NSObject {
    NSSet * _accessoriesDownloadingSoftwareUpdates;
    NSSet * _accessoriesWithRequestedSoftwareUpdates;
    unsigned long long  _allUpdates;
    unsigned long long  _firmwareUpdatesReadyToInstall;
    unsigned long long  _softwareUpdatesDownloading;
    unsigned long long  _softwareUpdatesInProgress;
    unsigned long long  _softwareUpdatesInstalled;
    unsigned long long  _softwareUpdatesInstalling;
    unsigned long long  _softwareUpdatesReadyToInstall;
    unsigned long long  _softwareUpdatesRequested;
    unsigned long long  _updatesReadyToInstall;
}

@property (nonatomic, retain) NSSet *accessoriesDownloadingSoftwareUpdates;
@property (nonatomic, retain) NSSet *accessoriesWithRequestedSoftwareUpdates;
@property (nonatomic) unsigned long long allUpdates;
@property (nonatomic) unsigned long long firmwareUpdatesReadyToInstall;
@property (nonatomic) unsigned long long softwareUpdatesDownloading;
@property (nonatomic) unsigned long long softwareUpdatesInProgress;
@property (nonatomic) unsigned long long softwareUpdatesInstalled;
@property (nonatomic) unsigned long long softwareUpdatesInstalling;
@property (nonatomic) unsigned long long softwareUpdatesReadyToInstall;
@property (nonatomic) unsigned long long softwareUpdatesRequested;
@property (nonatomic) unsigned long long updatesReadyToInstall;

+ (id)progressForAccessoriesDownloadingSoftwareUpdate:(id)arg1;

- (void).cxx_destruct;
- (id)accessoriesDownloadingSoftwareUpdates;
- (id)accessoriesWithRequestedSoftwareUpdates;
- (unsigned long long)allUpdates;
- (id)description;
- (unsigned long long)firmwareUpdatesReadyToInstall;
- (id)init;
- (id)initWithAccessories:(id)arg1;
- (void)setAccessoriesDownloadingSoftwareUpdates:(id)arg1;
- (void)setAccessoriesWithRequestedSoftwareUpdates:(id)arg1;
- (void)setAllUpdates:(unsigned long long)arg1;
- (void)setFirmwareUpdatesReadyToInstall:(unsigned long long)arg1;
- (void)setSoftwareUpdatesDownloading:(unsigned long long)arg1;
- (void)setSoftwareUpdatesInProgress:(unsigned long long)arg1;
- (void)setSoftwareUpdatesInstalled:(unsigned long long)arg1;
- (void)setSoftwareUpdatesInstalling:(unsigned long long)arg1;
- (void)setSoftwareUpdatesReadyToInstall:(unsigned long long)arg1;
- (void)setSoftwareUpdatesRequested:(unsigned long long)arg1;
- (void)setUpdatesReadyToInstall:(unsigned long long)arg1;
- (unsigned long long)softwareUpdatesDownloading;
- (unsigned long long)softwareUpdatesInProgress;
- (unsigned long long)softwareUpdatesInstalled;
- (unsigned long long)softwareUpdatesInstalling;
- (unsigned long long)softwareUpdatesReadyToInstall;
- (unsigned long long)softwareUpdatesRequested;
- (unsigned long long)updatesReadyToInstall;

@end
