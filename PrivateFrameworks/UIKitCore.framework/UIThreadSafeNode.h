
@interface UIThreadSafeNode : NSObject {
    DOMNode * _node;
}

+ (id)threadSafeNodeWithNode:(id)arg1;

- (void).cxx_destruct;
- (id)_realNode;
- (bool)conformsToProtocol:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
