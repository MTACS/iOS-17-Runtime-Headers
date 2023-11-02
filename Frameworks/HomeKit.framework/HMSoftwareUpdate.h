
@interface HMSoftwareUpdate : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    _HMContext * _context;
    <HMSoftwareUpdateDelegate> * _delegate;
    HMSoftwareUpdateDocumentation * _documentation;
    HMSoftwareUpdateDocumentationMetadata * _documentationMetadata;
    unsigned long long  _downloadSize;
    NSUUID * _identifier;
    double  _installDuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _needsAttentionReasons;
    NSDate * _releaseDate;
    long long  _state;
    NSUUID * _uniqueIdentifier;
    unsigned long long  _updateType;
    HMFSoftwareVersion * _version;
}

@property HMAccessory *accessory;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMSoftwareUpdateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMSoftwareUpdateDocumentation *documentation;
@property (getter=isDocumentationAvailable, readonly) bool documentationAvailable;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (readonly) unsigned long long downloadSize;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier;
@property (readonly) double installDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic) unsigned long long needsAttentionReasons;
@property (readonly) NSDate *releaseDate;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long updateType;
@property (readonly, copy) HMFSoftwareVersion *version;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdatedDocumentation:(id)arg1;
- (void)_handleUpdatedDocumentationMetadata:(id)arg1;
- (void)_handleUpdatedNeedsAttentionReasonsMessage:(id)arg1;
- (void)_handleUpdatedState:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_requestNeedsAttentionReasonsWithCompletionHandler:(id /* block */)arg1;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)accessory;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (id)delegate;
- (id)description;
- (id)documentation;
- (id)documentationMetadata;
- (unsigned long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchNeedsAttentionReasonsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 installDuration:(double)arg4 documentationMetadata:(id)arg5;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 installDuration:(double)arg4 documentationMetadata:(id)arg5 releaseDate:(id)arg6;
- (double)installDuration;
- (bool)isDocumentationAvailable;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned long long)needsAttentionReasons;
- (id)releaseDate;
- (void)requestDocumentation;
- (void)setAccessory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentation:(id)arg1;
- (void)setDocumentationMetadata:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNeedsAttentionReasons:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (long long)state;
- (id)uniqueIdentifier;
- (void)updateDocumentationMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)updateType;
- (id)version;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
