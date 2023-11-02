
@interface MSVWeakProxy : NSProxy {
    id  _object;
    Protocol * _protocol;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) Protocol *protocol;

+ (id)proxyWithObject:(id)arg1 protocol:(id)arg2;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)object;
- (id)protocol;

@end
