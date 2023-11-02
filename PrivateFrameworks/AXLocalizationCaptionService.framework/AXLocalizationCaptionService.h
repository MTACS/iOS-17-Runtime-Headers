
@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate> {
    AXUIClient * _client;
}

@property (nonatomic, retain) AXUIClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(id /* block */)arg3;
+ (id)service;
+ (void)startService;
+ (void)stopService;

- (void).cxx_destruct;
- (id)_clientIdentifier;
- (id)client;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)setClient:(id)arg1;

@end
