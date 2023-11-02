
@interface HMDRoom : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMDApplicationData * _appData;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSUUID * _spiClientIdentifier;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDApplicationData *appData;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;
@property (nonatomic, readonly, copy) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateRoomModel:(id)arg1 message:(id)arg2;
- (void)_registerForMessages;
- (id)appData;
- (id)assistantObject;
- (id)attributeDescriptions;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)privateDescription;
- (id)serializedIdentifier;
- (void)setAppData:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)spiClientIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)urlString;
- (id)uuid;
- (id)workQueue;

@end
