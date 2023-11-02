
@interface _EXRunningExtension : NSObject <NSXPCListenerDelegate> {
    <_EXExtensionConfigurationProviding> * _configuration;
    _EXExtension * _extension;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    unsigned long long  _signpost;
}

@property (readonly) <_EXExtensionConfigurationProviding> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _EXExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) struct { unsigned int x1[8]; } hostAuditToken;
@property (readonly) unsigned long long signpost;
@property (readonly) Class superclass;

+ (int (*)entryPointFunction;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_startWithArguments:(const char **)arg1 count:(int)arg2;
- (void)checkIn;
- (id)configuration;
- (void)didFinishLaunching;
- (id)extension;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setExtension:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;
- (unsigned long long)signpost;
- (int)startWithArguments:(const char **)arg1 count:(int)arg2;
- (void)willFinishLaunching;

@end
