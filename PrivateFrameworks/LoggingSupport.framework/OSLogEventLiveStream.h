
@interface OSLogEventLiveStream : OSLogEventStreamBase {
    NSObject<OS_xpc_object> * _diagdconn;
    id /* block */  _dropnoteHandler;
    unsigned long long  _reason;
    OSLogEventLiveSource * _source;
    _OSLogStreamFilter * _streamFilter;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *diagdconn;
@property (nonatomic, copy) id /* block */ dropnoteHandler;
@property (nonatomic, readonly) OSLogEventLiveSource *source;

- (void).cxx_destruct;
- (void)_activateLiveStream;
- (void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2;
- (void)activate;
- (id)diagdconn;
- (id /* block */)dropnoteHandler;
- (id)initWithLiveSource:(id)arg1;
- (void)invalidate;
- (void)setDiagdconn:(id)arg1;
- (void)setDropnoteHandler:(id /* block */)arg1;
- (void)setDroppedEventHandler:(id /* block */)arg1;
- (void)setFilterPredicate:(id)arg1;
- (id)source;

@end
