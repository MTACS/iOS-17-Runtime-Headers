
@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry> {
    <NRTermsAcknowledgementRegistry> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)errorStringWithEnum:(unsigned long long)arg1;
+ (id)errorWithEnum:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(id /* block */)arg3;

@end
