
@interface HMDHomeMediaSystemHandler : HMFObject <HMDDevicePreferenceDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, HMDMediaSystemDataSource, HMDStereoPairSettingsControllerDataSource, HMFLogging, NSSecureCoding> {
    <HMDHomeMediaSystemHandlerDataSource> * _dataSource;
    <HMDHomeMediaSystemHandlerDelegate> * _delegate;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    HMFMessageDispatcher * _messageDispatcher;
    HMDHomeMediaSystemControllerMessageHandler * _messageHandler;
    NSNotificationCenter * _notificationCenter;
    NSUUID * _parentUUID;
    HMDStereoPairSettingsController * _stereoPairSettingsController;
    NSMutableDictionary * _uuidToMediaSystems;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HMDHomeMediaSystemHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDHomeMediaSystemHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (readonly, copy) NSArray *mediaSystems;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) NSUUID *parentUUID;
@property (nonatomic, retain) HMDStereoPairSettingsController *stereoPairSettingsController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_currentMediaSystemIfPrimary;
- (void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2;
- (void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2;
- (void)addMediaSystem:(id)arg1;
- (void)addMediaSystemWithGroupIdentifier:(id)arg1 usingData:(id)arg2;
- (void)addMediaSystemsWithIdentifiers:(id)arg1 usingData:(id)arg2;
- (id)attributeDescriptions;
- (id)backingStoreObjectsForVersion:(long long)arg1;
- (void)configure:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 queue:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6;
- (void)confirmPrimaryResidentIfFirstMediaSystem;
- (id)dataSource;
- (id)delegate;
- (id)destinationForMediaSystem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventForwarder;
- (id)eventStoreReadHandle;
- (id)filteredMediaSystems;
- (void)handleRemovedMediaSystem:(id)arg1;
- (id)home;
- (id)identifiersInMediaSystemData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaSystems:(id)arg1;
- (id)localAndRemoteSubscriptionProvider;
- (id)logIdentifier;
- (id)mediaSystemData:(id)arg1 withIdentifier:(id)arg2;
- (id)mediaSystemForAccessory:(id)arg1;
- (id)mediaSystemWithUUID:(id)arg1;
- (id)mediaSystems;
- (void)mergeMediaSystemData:(id)arg1;
- (id)messageDispatcher;
- (id)messageHandler;
- (void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(id /* block */)arg8;
- (void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 message:(id)arg3;
- (void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(id /* block */)arg8;
- (id)notificationCenter;
- (void)notifyOfRemovedMediaSystem:(id)arg1;
- (id)parentUUID;
- (id)privateDescription;
- (id)processedMediaSystemBuilderMessageFor:(id)arg1;
- (void)removeMediaSystem:(id)arg1;
- (void)routeMediaSystemWithMessage:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setParentUUID:(id)arg1;
- (void)setStereoPairSettingsController:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)stereoPairSettingsController;
- (void)subscribeToSettingsForNewlyAddedMediaSystem:(id)arg1;
- (bool)supportsDeviceWithCapabilities:(id)arg1;
- (void)unsubscribeToSettingsForMediaSystem:(id)arg1;
- (void)updateMediaSystem:(id)arg1;
- (id)uuidToMediaSystems;
- (id)workQueue;

@end
