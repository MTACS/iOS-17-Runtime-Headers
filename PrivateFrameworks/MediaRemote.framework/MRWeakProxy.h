
@interface MRWeakProxy : NSObject {
    id  _object;
    Protocol * _protocol;
}

@property (nonatomic) id object;
@property (nonatomic, retain) Protocol *protocol;

+ (id)weakProxyWithObject:(id)arg1 protocol:(id)arg2;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)object;
- (id)protocol;
- (void)setObject:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
