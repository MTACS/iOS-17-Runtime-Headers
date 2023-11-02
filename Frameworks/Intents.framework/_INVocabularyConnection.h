
@interface _INVocabularyConnection : NSObject {
    NSXPCConnection * _connection;
    bool  _connectionValid;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connect;
- (id)_syncService;
- (void)dealloc;
- (id)init;
- (id)settingsService;

@end
