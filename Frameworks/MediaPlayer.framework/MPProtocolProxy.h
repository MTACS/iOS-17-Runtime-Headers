
@interface MPProtocolProxy : NSProxy {
    NSHashTable * _objects;
    Protocol * _protocol;
}

@property (nonatomic, retain) NSHashTable *objects;
@property (nonatomic, retain) Protocol *protocol;

+ (id)proxyForObject:(id)arg1 protocol:(id)arg2;
+ (id)proxyForObjects:(id)arg1 protocol:(id)arg2;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)objects;
- (id)protocol;
- (void)setObjects:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
