
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol> {
    <SYDClientProtocol> * _target;
}

@property (nonatomic) <SYDClientProtocol> *target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)storeDidChangeWithStoreID:(id)arg1 changeDictionary:(id)arg2 reply:(id /* block */)arg3;
- (id)target;

@end
