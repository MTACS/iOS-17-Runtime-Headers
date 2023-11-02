
@interface DTXService : NSObject <DTXAllowedRPC> {
    DTXChannel * _channel;
}

@property (nonatomic, readonly, retain) DTXChannel *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)automaticallyRegistersCapabilities;
+ (void)instantiateServiceWithChannel:(id)arg1;
+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)channel;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;

@end
