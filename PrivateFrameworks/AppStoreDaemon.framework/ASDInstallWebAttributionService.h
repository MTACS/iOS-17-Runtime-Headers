
@interface ASDInstallWebAttributionService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addInstallWebAttributionParamsWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;

@end
