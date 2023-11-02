
@interface AppleFirmwareUpdateController : NSObject {
    <AppleFirmwareUpdateControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSArray * _fdrClasses;
    NSString * _fwAssetDirectory;
    NSString * _fwAssetFile;
    NSString * _fwAssetSignatureType;
    NSNumber * _fwAssetSize;
    NSNumber * _fwAssetVersion;
    NSNumber * _img4Tag;
    struct IONotificationPort { } * _iokitNotifyPort;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _pendingCriticalEarlyBootEntriesInternal;
    NSNumber * _registryEntryID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *fdrClasses;
@property (nonatomic, retain) NSString *fwAssetFile;
@property (nonatomic, retain) NSString *fwAssetSignatureType;
@property (nonatomic, retain) NSNumber *fwAssetSize;
@property (nonatomic, retain) NSNumber *fwAssetVersion;
@property (nonatomic, retain) NSNumber *img4Tag;

- (void).cxx_destruct;
- (bool)createFWAssetInfo;
- (bool)createFWAssetInfoInternal;
- (void)dealloc;
- (void)earlyBootAccessoryAttached:(unsigned int)arg1;
- (void)earlyBootAccessoryAttachedInternal:(unsigned int)arg1;
- (void)enableEarlyBootLoggingMode;
- (id)extractFDRDataWithClassKey:(id)arg1 error:(id*)arg2;
- (id)fdrClasses;
- (id)findFWAssetFromTag:(id)arg1 tag:(unsigned int)arg2 size:(unsigned long long*)arg3;
- (id)fwAssetFile;
- (id)fwAssetSignatureType;
- (id)fwAssetSize;
- (id)fwAssetVersion;
- (unsigned int)getConnectionForRegistryID:(long long*)arg1;
- (bool)getEarlyBootList:(id)arg1;
- (bool)getEarlyBootListInternal:(id)arg1;
- (id)getPendingEarlyBootAccessories;
- (unsigned int)getServiceForRegistryID:(long long*)arg1;
- (id)img4Tag;
- (id)initWithRegistryEntryID:(id)arg1 fwAssetDirectory:(id)arg2;
- (bool)isFWDownloadNeeded:(id)arg1;
- (void)readCriticalEarlyBootEntries;
- (bool)registerForPendingEarlyBootAccessories;
- (bool)registerForPendingEarlyBootAccessoriesInternal;
- (long long)sendFDRData:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFdrClasses:(id)arg1;
- (void)setFwAssetFile:(id)arg1;
- (void)setFwAssetSignatureType:(id)arg1;
- (void)setFwAssetSize:(id)arg1;
- (void)setFwAssetVersion:(id)arg1;
- (void)setImg4Tag:(id)arg1;
- (void)sortEarlyBootListWithLoadingGroup:(id)arg1;
- (id)updateFirmwareWithOptions:(id)arg1;
- (id)updateFirmwareWithOptionsInternal:(id)arg1;

@end
