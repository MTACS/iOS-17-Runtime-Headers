
@interface CDRemoveEventsConsumer : NSObject {
    id /* block */  _consumer;
    NSObject<OS_dispatch_queue> * _consumer_q;
    struct fsid { 
        int val[2]; 
    }  _fsid;
    bool  _historyDone;
    NSString * _identifier;
    NSObject<OS_dispatch_semaphore> * _sem;
    unsigned long long  _since;
    struct __FSEventStream { } * _stream;
    NSString * _volume;
}

@property (nonatomic, copy) id /* block */ consumer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *consumer_q;
@property struct fsid { int x1[2]; } fsid;
@property bool historyDone;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *sem;
@property unsigned long long since;
@property struct __FSEventStream { }*stream;
@property (nonatomic, retain) NSString *volume;

- (void).cxx_destruct;
- (void)callback:(id)arg1;
- (void)consumeStream:(struct __FSEventStream { }*)arg1 forVolume:(id)arg2;
- (id /* block */)consumer;
- (id)consumer_q;
- (void)dealloc;
- (struct fsid { int x1[2]; })fsid;
- (bool)historyDone;
- (id)identifier;
- (id)initWithConsumer:(id /* block */)arg1 identifier:(id)arg2;
- (id)sem;
- (void)setConsumer:(id /* block */)arg1;
- (void)setConsumer_q:(id)arg1;
- (void)setFsid:(struct fsid { int x1[2]; })arg1;
- (void)setHistoryDone:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSem:(id)arg1;
- (void)setSince:(unsigned long long)arg1;
- (void)setStream:(struct __FSEventStream { }*)arg1;
- (void)setVolume:(id)arg1;
- (unsigned long long)since;
- (struct __FSEventStream { }*)stream;
- (id)volume;

@end
