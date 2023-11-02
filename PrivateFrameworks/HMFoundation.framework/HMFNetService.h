
@interface HMFNetService : HMFObject <HMFLogging, NSNetServiceDelegate> {
    NSMutableDictionary * _TXTRecord;
    NSArray * _addresses;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFNetServiceDelegate> * _delegate;
    NSString * _domain;
    HMFNetAddress * _hostName;
    NSNetService * _internal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    unsigned long long  _port;
    bool  _publishing;
    NSMutableArray * _resolveBlocks;
    long long  _resolveRunningState;
    long long  _resolveState;
    bool  _resolved;
    NSString * _type;
}

@property (readonly, copy) NSDictionary *TXTRecord;
@property (readonly, copy) NSArray *addresses;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMFNetServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *hmd_sessionIdentifier;
@property (readonly, copy) HMFNetAddress *hostName;
@property (nonatomic, readonly) NSNetService *internal;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long port;
@property (getter=isPublishing) bool publishing;
@property (nonatomic, readonly) NSMutableArray *resolveBlocks;
@property (nonatomic) long long resolveRunningState;
@property (nonatomic) long long resolveState;
@property (getter=isResolved, readonly) bool resolved;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)errorFromNetServiceErrorDict:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)TXTRecord;
- (void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)addresses;
- (id)bestAddress;
- (id)clientQueue;
- (void)confirmWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)domain;
- (unsigned long long)hash;
- (id)hostName;
- (id)init;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithNetService:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isPublishing;
- (bool)isResolved;
- (id)logIdentifier;
- (id)name;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)notifyUpdatedAddresses:(id)arg1;
- (unsigned long long)port;
- (void)removeAllTXTRecordObjects;
- (id)resolveBlocks;
- (long long)resolveRunningState;
- (long long)resolveState;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)setAddresses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setPublishing:(bool)arg1;
- (void)setResolveRunningState:(long long)arg1;
- (void)setResolveState:(long long)arg1;
- (void)setResolved:(bool)arg1;
- (void)setTXTRecord:(id)arg1;
- (id)shortDescription;
- (void)startMonitoring;
- (id)type;
- (void)updateTXTRecordWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)hmd_sessionIdentifier;

@end
