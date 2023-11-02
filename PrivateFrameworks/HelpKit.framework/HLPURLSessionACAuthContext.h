
@interface HLPURLSessionACAuthContext : NSObject <NSCopying> {
    NSString * _appIdentifier;
    NSString * _clientIdentifier;
    NSString * _enviromentIdentifier;
    NSString * _interactivityMode;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *enviromentIdentifier;
@property (nonatomic, copy) NSString *interactivityMode;

+ (id)defaultContext;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)enviromentIdentifier;
- (id)initWithAppIdentifier:(id)arg1 enviromentIdentifier:(id)arg2 interactivity:(id)arg3;
- (id)interactivityMode;
- (void)setAppIdentifier:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setEnviromentIdentifier:(id)arg1;
- (void)setInteractivityMode:(id)arg1;

@end
