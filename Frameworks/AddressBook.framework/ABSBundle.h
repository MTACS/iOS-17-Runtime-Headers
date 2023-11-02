
@interface ABSBundle : NSObject {
    NSBundle * _backingBundle;
}

@property (nonatomic, readonly) NSBundle *backingBundle;

- (void).cxx_destruct;
- (id)backingBundle;
- (Class)classNamed:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithBackingBundle:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
