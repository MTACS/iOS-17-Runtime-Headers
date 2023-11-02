
@interface HMDNetworkRouterClientControl : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _operations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *operations;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperations:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)operations;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setOperations:(id)arg1;

@end
