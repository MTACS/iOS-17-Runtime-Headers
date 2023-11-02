
@interface LNTranscriptProvider : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)createStreamsWithStreamURL:(id)arg1;
+ (id)publisherForStream:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 maxEvents:(id)arg4 reversed:(bool)arg5;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)deleteAllRecordsWithReply:(id /* block */)arg1;
- (void)deleteRecordsWithMatchingPredicate:(id)arg1 reply:(id /* block */)arg2;
- (void)donateActionRecordData:(id)arg1 writeImmediately:(bool)arg2 reply:(id /* block */)arg3;
- (void)donateWithActionRecord:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (void)setConnection:(id)arg1;
- (id)transcriptPublisherFromDate:(id)arg1 error:(id*)arg2;
- (id)transcriptPublisherFromDate:(id)arg1 toDate:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4 error:(id*)arg5;

@end
