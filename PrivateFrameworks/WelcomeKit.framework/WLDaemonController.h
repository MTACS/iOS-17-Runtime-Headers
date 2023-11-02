
@interface WLDaemonController : NSObject {
    WLDaemonConnection * _connection;
}

@property (nonatomic, retain) WLDaemonConnection *connection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)getLocalImportOptionsWithCompletion:(id /* block */)arg1;
- (void)importLocalContent;
- (id)init;
- (void)setConnection:(id)arg1;
- (void)setStashDataLocally:(bool)arg1;

@end
