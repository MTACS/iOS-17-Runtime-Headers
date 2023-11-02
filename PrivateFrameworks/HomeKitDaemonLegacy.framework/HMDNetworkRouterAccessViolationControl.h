
@interface HMDNetworkRouterAccessViolationControl : NSObject <HAPTLVProtocol, NSCopying> {
    HMDNetworkRouterClientIdentifierList * _clientIdentifierList;
    HMDNetworkRouterAccessViolationControlOperation * _operation;
}

@property (nonatomic, retain) HMDNetworkRouterClientIdentifierList *clientIdentifierList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterAccessViolationControlOperation *operation;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientIdentifierList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperation:(id)arg1 clientIdentifierList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)operation;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setClientIdentifierList:(id)arg1;
- (void)setOperation:(id)arg1;

@end
