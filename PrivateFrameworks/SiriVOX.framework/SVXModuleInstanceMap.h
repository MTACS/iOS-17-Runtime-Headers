
@interface SVXModuleInstanceMap : NSObject <SVXModuleInstanceProviding> {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly) SVXClientServiceServer *clientServiceServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SVXDeviceSetupManager *deviceSetupManager;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVXServiceCommandHandler *serviceCommandHandler;
@property (nonatomic, readonly) SVXSessionManager *sessionManager;
@property (nonatomic, readonly) SVXSpeechSynthesizer *speechSynthesizer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVXSystemObserver *systemObserver;

- (void).cxx_destruct;
- (id)clientServiceServer;
- (id)deviceSetupManager;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)moduleInstanceWithIdentifier:(id)arg1;
- (id)serviceCommandHandler;
- (id)sessionManager;
- (id)speechSynthesizer;
- (id)systemObserver;

@end
