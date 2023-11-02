
@interface AMSNilBagValueFilteringProxy : NSProxy {
    <AMSBagProtocol> * _wrappedBag;
}

@property (nonatomic, readonly) <AMSBagProtocol> *wrappedBag;

+ (id)proxyWithBag:(id)arg1;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)_substituteNilIfNeededWithValue:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBag:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)stringForKey:(id)arg1;
- (id)wrappedBag;

@end
