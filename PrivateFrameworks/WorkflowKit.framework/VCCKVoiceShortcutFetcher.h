
@interface VCCKVoiceShortcutFetcher : NSObject {
    bool  _completed;
    id /* block */  _completionHandler;
    CKDatabase * _database;
    long long  _qualityOfService;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _recordHandler;
}

@property (nonatomic) bool completed;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) id /* block */ recordHandler;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (bool)completed;
- (id /* block */)completionHandler;
- (id)database;
- (void)fetchRecordZones;
- (void)fetchRecordsFromZone:(id)arg1;
- (void)finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)initWithRecordHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (long long)qualityOfService;
- (id)queue;
- (id /* block */)recordHandler;
- (void)setCompleted:(bool)arg1;
- (void)start;

@end
