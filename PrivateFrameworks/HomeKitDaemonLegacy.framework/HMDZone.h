
@interface HMDZone : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding> {
    NSMutableDictionary * _currentRooms;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSMutableArray * _roomUUIDs;
    NSUUID * _spiClientIdentifier;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (copy) NSString *name;
@property (readonly, copy) NSArray *roomUUIDs;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_checkForAddValidity:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (bool)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)arg1 error:(id*)arg2;
- (void)_registerForMessages;
- (void)addRoomIfNotPresent:(id)arg1;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)msgDispatcher;
- (id)name;
- (void)removeRoom:(id)arg1;
- (id)roomUUIDs;
- (id)rooms;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)spiClientIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)updateZoneWithModel:(id)arg1 message:(id)arg2;
- (id)urlString;
- (id)uuid;
- (id)workQueue;

@end
