
@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocol, SUCoreConnectPolicyProtocolPrivate> {
    <SUCoreConnectClientDelegate> * _clientDelegate;
    NSString * _clientID;
    NSString * _clientIDRaw;
    int  _clientProcessIdentifier;
    NSSet * _proxyObjectClasses;
    NSString * _serviceName;
    bool  _usesPersistentXPCConnections;
}

@property (nonatomic, readonly) <SUCoreConnectClientDelegate> *clientDelegate;
@property (nonatomic, readonly, retain) NSString *clientID;
@property (nonatomic, readonly, retain) NSString *clientIDRaw;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *proxyObjectClasses;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic) bool usesPersistentXPCConnections;

+ (id)_getAllowlistedClassesForKey:(id)arg1;
+ (id)_getSharedClientAccessQueue;
+ (id)_getSharedClientAllowlistedClasses;
+ (void)clearAllowlistedClasses;
+ (id)getAllowlistedClassesForKey:(id)arg1;
+ (void)setAllowlistedClass:(Class)arg1 forKey:(id)arg2;
+ (void)setAllowlistedClasses:(id)arg1 forKey:(id)arg2;
+ (void)setAllowlistedClasses:(id)arg1 forKeys:(id)arg2;

- (void).cxx_destruct;
- (id)clientDelegate;
- (id)clientID;
- (id)clientIDRaw;
- (int)clientProcessIdentifier;
- (id)description;
- (id)initForServiceName:(id)arg1 delegate:(id)arg2;
- (id)initForServiceName:(id)arg1 delegate:(id)arg2 clientID:(id)arg3;
- (id)proxyObjectClasses;
- (id)serviceName;
- (void)setProxyObjectClasses:(id)arg1;
- (void)setUsesPersistentXPCConnections:(bool)arg1;
- (bool)usesPersistentXPCConnections;

@end
