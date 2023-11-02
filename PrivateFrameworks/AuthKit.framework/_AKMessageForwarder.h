
@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {
    id  _strongReceiver;
    id  _weakReceiver;
}

- (void).cxx_destruct;
- (void)activate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithReceiver:(id)arg1 strong:(bool)arg2;
- (id)initWithStrongReceiver:(id)arg1;
- (id)initWithWeakReceiver:(id)arg1;

@end
