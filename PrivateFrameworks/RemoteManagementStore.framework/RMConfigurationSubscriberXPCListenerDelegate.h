
@interface RMConfigurationSubscriberXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    NSArray * _applicatorClasses;
    Class  _publisherClass;
}

@property (nonatomic, readonly, copy) NSArray *applicatorClasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) Class publisherClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicatorClasses;
- (id)initWithApplicators:(id)arg1 publisherClass:(Class)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (Class)publisherClass;

@end
