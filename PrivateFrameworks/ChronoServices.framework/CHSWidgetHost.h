
@interface CHSWidgetHost : NSObject <BSDescriptionStreamable> {
    unsigned long long  _activationState;
    CHSWidgetConfiguration * _configuration;
    CHSChronoServicesConnection * _connection;
    NSString * _identifier;
    bool  _invalid;
    NSString * _loggingIdentifier;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, copy) CHSWidgetConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)_activationState;
- (id)_connectionCopy;
- (void)_connectionCreateOrUpdateConfigurations;
- (void)_connectionRemoveHost;
- (void)_connectionUpdateActivationState;
- (id)_initWithHost:(id)arg1;
- (void)activate;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)configuration;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2 activationState:(unsigned long long)arg3 connection:(id)arg4;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2 active:(bool)arg3;
- (void)invalidate;
- (bool)isActive;
- (void)setConfiguration:(id)arg1;

@end
