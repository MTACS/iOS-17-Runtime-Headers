
@interface __HMFBlockMessageHandler : __HMFMessageHandler {
    id /* block */  _handler;
}

@property (readonly, copy) id /* block */ handler;

- (void).cxx_destruct;
- (id /* block */)handler;
- (bool)invokeWithMessage:(id)arg1;

@end
