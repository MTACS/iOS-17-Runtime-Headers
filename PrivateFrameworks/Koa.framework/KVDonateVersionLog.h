
@interface KVDonateVersionLog : NSObject {
    NSMutableDictionary * _log;
    NSURL * _logFileURL;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (unsigned long long)incrementVersionForItemType:(long long)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4;
- (id)init;
- (id)initWithQueue:(id)arg1 directoryPath:(id)arg2;

@end
