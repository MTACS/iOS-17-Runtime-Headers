
@interface SKIMessagesGatekeeperPayload : NSObject {
    NSString * _appBundleId;
}

@property (copy) NSString *appBundleId;
@property (readonly, retain) SKIDirectInvocationPayload *invocationPayload;

+ (bool)supports:(id)arg1;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)initWithAppBundleId:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)invocationPayload;
- (void)setAppBundleId:(id)arg1;

@end
