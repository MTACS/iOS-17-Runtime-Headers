
@interface HAP2EncodedEmptyResponseThread : HAP2LoggingObject <HAP2EncodedResponse>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isEncrypted;

@end
