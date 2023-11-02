
@interface __HMFSelectorMessageHandler : __HMFMessageHandler {
    SEL  _selector;
}

@property (readonly) SEL selector;

- (bool)invokeWithMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (SEL)selector;

@end
