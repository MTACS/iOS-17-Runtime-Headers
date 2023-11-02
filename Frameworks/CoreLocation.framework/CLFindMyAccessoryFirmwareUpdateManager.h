
@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { 
        struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { 
            struct CLConnectionClient {} *__value_; 
        } __ptr_; 
    }  _connection;
    <CLFindMyAccessoryFirmwareUpdateDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (nonatomic) <CLFindMyAccessoryFirmwareUpdateDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abortFirmwareUpdateForDevice:(id)arg1;
- (id)delegate;
- (void)fetchWhetherLocalFirmwareAssetIsInUseForProductGroup:(id)arg1 andProductNumber:(id)arg2;
- (void)getPersonalizationInfoForDevice:(id)arg1;
- (void)handleInterruption;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateFirmwareForDevice:(id)arg1 withAssetURL:(id)arg2;
- (void)useDefaultFirmwareAssetSourceForProductGroup:(id)arg1 andProductNumber:(id)arg2;
- (void)useLocalFirmwareAssetFromURL:(id)arg1 forProductGroup:(id)arg2 forProductNumber:(id)arg3 withSandboxExtension:(id)arg4;

@end
