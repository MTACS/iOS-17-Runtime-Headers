
@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDAccessoryAdvertisement * _accessoryAdvertisement;
    long long  _associationOptions;
    HMAccessoryCategory * _category;
    NSUUID * _commissioningID;
    NSString * _identifier;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    NSNumber * _nodeID;
    NSNumber * _productID;
    NSData * _rootPublicKey;
    NSString * _serialNumber;
    NSUUID * _uuid;
    NSNumber * _vendorID;
}

@property (nonatomic, retain) HMDAccessoryAdvertisement *accessoryAdvertisement;
@property (readonly) long long associationOptions;
@property (retain) HMAccessoryCategory *category;
@property (copy) NSUUID *commissioningID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (getter=isKnownToSystemCommissioner, readonly) bool knownToSystemCommissioner;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (readonly, copy) NSNumber *nodeID;
@property (copy) NSNumber *productID;
@property (getter=isReachable, readonly) bool reachable;
@property (readonly, copy) NSData *rootPublicKey;
@property (copy) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly) bool supportsCHIP;
@property (readonly) unsigned long long transportTypes;
@property (setter=setUUID:, copy) NSUUID *uuid;
@property (copy) NSNumber *vendorID;

+ (id)logCategory;
+ (id)otherAccessoryCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (id)accessoryAdvertisement;
- (void)associateWithAccessoryAdvertisement:(id)arg1;
- (long long)associationOptions;
- (id)category;
- (id)commissioningID;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (void)identifyWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isKnownToSystemCommissioner;
- (bool)isReachable;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (id)name;
- (id)nodeID;
- (id)productID;
- (id)rootPublicKey;
- (id)serialNumber;
- (void)setAccessoryAdvertisement:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCommissioningID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setVendorID:(id)arg1;
- (id)shortDescription;
- (bool)supportsCHIP;
- (unsigned long long)transportTypes;
- (void)updateCategoryWithCategoryIdentifier:(id)arg1;
- (id)uuid;
- (id)vendorID;

@end
