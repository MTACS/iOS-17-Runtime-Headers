
@interface EFInvocationToken : NSObject <EFInvocable> {
    NSMutableArray * _blocks;
    bool  _isInvoked;
    NSString * _label;
    NSLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvoked, readonly) bool invoked;
@property (nonatomic, readonly, copy) NSString *label;
@property (readonly) Class superclass;

+ (id)_descriptionString;
+ (id)tokenWithInvocationBlock:(id /* block */)arg1;
+ (id)tokenWithLabel:(id)arg1 invocationBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_nts_consumeBlocks;
- (void)addInvocable:(id)arg1;
- (void)addInvocationBlock:(id /* block */)arg1;
- (id)description;
- (id)init;
- (id)initWithInvocationBlock:(id /* block */)arg1;
- (id)initWithLabel:(id)arg1;
- (void)invoke;
- (bool)isInvoked;
- (id)label;
- (void)removeAllInvocationBlocks;

@end
