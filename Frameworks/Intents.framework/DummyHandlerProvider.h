
@interface DummyHandlerProvider : NSObject <INIntentHandlerProvidingPrivate> {
    id  _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)handler;
- (id)handlerForIntent:(id)arg1;
- (id)initWithHandler:(id)arg1;

@end
