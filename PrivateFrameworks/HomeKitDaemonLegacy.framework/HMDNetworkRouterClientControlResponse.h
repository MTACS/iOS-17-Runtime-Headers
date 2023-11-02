
@interface HMDNetworkRouterClientControlResponse : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _operationResponses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *operationResponses;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperationResponses:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)operationResponses;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setOperationResponses:(id)arg1;

@end
