
@interface DEDConfiguration : NSObject {
    NSXPCListener * _anonymousListener;
}

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)anonymousListener;
- (unsigned long long)connectionType;
- (id)dedDirectory;
- (id)errorDomain;
- (id)identifier;
- (void)invalidateTestListeners;
- (const char *)loggingSubsystem;
- (id)machServiceName;
- (void)setAnonymousListener:(id)arg1;
- (id)sharedAnonymousListener;

@end
