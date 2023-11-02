
@interface SUCoreConnectServerPolicy : NSObject <SUCoreConnectPolicyProtocol, SUCoreConnectPolicyProtocolPrivate> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSSet * _entitlements;
    <SUCoreConnectServerDelegate> * _serverDelegate;
    NSString * _serviceName;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSSet *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SUCoreConnectServerDelegate> *serverDelegate;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)_getAllowlistedClassesForKey:(id)arg1;
+ (id)_getSharedServerAccessQueue;
+ (id)_getSharedServerAllowlistedClasses;
+ (void)clearAllowlistedClasses;
+ (id)getAllowlistedClassesForKey:(id)arg1;
+ (void)setAllowlistedClass:(Class)arg1 forKey:(id)arg2;
+ (void)setAllowlistedClasses:(id)arg1 forKey:(id)arg2;
+ (void)setAllowlistedClasses:(id)arg1 forKeys:(id)arg2;

- (void).cxx_destruct;
- (id)connectionQueue;
- (id)delegateQueue;
- (id)description;
- (id)entitlements;
- (id)initWithServiceName:(id)arg1 entitlements:(id)arg2 serverDelegate:(id)arg3;
- (id)serverDelegate;
- (id)serviceName;

@end
