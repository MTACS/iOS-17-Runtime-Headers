
@interface HMDNetworkRouterAccessViolationControlOperation : NSObject <HAPTLVProtocol, NSCopying> {
    long long  _operation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long operation;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperation:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)operation;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setOperation:(long long)arg1;

@end
