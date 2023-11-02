
@interface NEPolicySession : NSObject <NEPrettyDescription> {
    bool  _convertToLegacyPriority;
    long long  _internalPriority;
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSData * _lastReceivedResponse;
    unsigned int  _lastSendMessageID;
    NSMutableDictionary * _policies;
    NSObject<OS_dispatch_semaphore> * _responseSemaphore;
    int  _sessionFD;
}

@property long long priority;

- (void).cxx_destruct;
- (unsigned long long)addDomainFilterWithData:(id)arg1;
- (unsigned long long)addPolicy:(id)arg1;
- (unsigned long long)addPolicy:(id)arg1 storeLocally:(bool)arg2;
- (bool)apply;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dumpKernelPolicies;
- (int)dupSocket;
- (id)init;
- (id)initFromPrivilegedProcess;
- (id)initWithSessionName:(id)arg1;
- (id)initWithSocket:(int)arg1;
- (bool)lockSessionToCurrentProcess;
- (id)policyWithID:(unsigned long long)arg1;
- (long long)priority;
- (bool)registerServiceUUID:(id)arg1;
- (bool)removeAllDomainFilters;
- (bool)removeAllPolicies;
- (bool)removeDomainFilterWithID:(unsigned long long)arg1;
- (bool)removePolicyWithID:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (bool)unregisterServiceUUID:(id)arg1;

@end
