
@interface COSettings : NSObject {
    id /* block */  _clientCallback;
    NSURL * _path;
    NSMutableDictionary * _settings;
    NSObject<OS_dispatch_source> * _source;
    NSURL * _url;
}

@property (nonatomic, copy) id /* block */ clientCallback;
@property (nonatomic, readonly) NSURL *path;
@property (nonatomic, retain) NSMutableDictionary *settings;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *source;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id /* block */)clientCallback;
- (bool)createSettingsFile;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)path;
- (bool)readSettings;
- (void)removeObjectForKey:(id)arg1;
- (void)setClientCallback:(id /* block */)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setSettings:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)settings;
- (id)source;
- (void)startMonitoringForChanges:(id /* block */)arg1;
- (bool)startMonitoringForFileDeletion;
- (void)stopMonitoring;
- (void)stopMonitoringForFileDeletion;
- (id)url;
- (bool)writeSettings;

@end
