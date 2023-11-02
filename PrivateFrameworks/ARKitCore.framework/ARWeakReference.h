
@interface ARWeakReference : NSProxy {
    id  _object;
}

@property (nonatomic, readonly) id object;

+ (void)_noOp;
+ (id)weakReferenceWithObject:(id)arg1;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)object;

@end
