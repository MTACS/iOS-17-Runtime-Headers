
@interface SWConfigurationScript : NSObject <SWScript> {
    NSString * _configuration;
    WKUserScript * userScript;
}

@property (nonatomic, readonly, copy) NSString *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *executableScript;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool queueable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserScript *userScript;

- (void).cxx_destruct;
- (id)configuration;
- (id)executableScript;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1;
- (bool)queueable;
- (id)userScript;

@end
