
@interface RBTimeProviderEvent : NSObject <RBTimeProvidingEvent> {
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithSource:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSource:(id)arg1;
- (void)cancel;

@end
