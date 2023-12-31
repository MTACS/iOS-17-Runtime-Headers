
@interface SSXPCServerObserver : NSObject {
    id  _observer;
    SEL  _selector;
}

@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (SEL)selector;
- (void)setObserver:(id)arg1;
- (void)setSelector:(SEL)arg1;

@end
