
@interface OSActivityStream : NSObject {
    <OSActivityStreamDelegate> * _delegate;
    bool  _delegateHasDidFail;
    bool  _delegateStreamErrorLess;
    bool  _delegateStreamWithError;
    OSLogDevice * _device;
    <OSDeviceDelegate> * _deviceDelegate;
    void * _deviceEventSession;
    void * _deviceSearchSession;
    unsigned long long  _eventFilter;
    unsigned long long  _options;
    NSMutableSet * _pids;
    NSCompoundPredicate * _predicate;
    struct os_activity_stream_s { } * _stream;
    _OSLogStreamFilter * _streamFilter;
    NSMutableSet * _uids;
}

@property (nonatomic) <OSActivityStreamDelegate> *delegate;
@property (nonatomic, retain) OSLogDevice *device;
@property (nonatomic) <OSDeviceDelegate> *deviceDelegate;
@property (nonatomic) unsigned long long eventFilter;
@property (nonatomic) unsigned long long events;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSCompoundPredicate *predicate;

- (void).cxx_destruct;
- (void)addProcessID:(int)arg1;
- (void)addUserID:(unsigned int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)deviceDelegate;
- (bool)establishTrust:(id)arg1;
- (unsigned long long)eventFilter;
- (unsigned long long)events;
- (id)getInfoForDevice:(id)arg1 andKey:(id)arg2;
- (id)init;
- (id)initWithDevice:(void*)arg1;
- (unsigned long long)options;
- (id)predicate;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceDelegate:(id)arg1;
- (void)setEventFilter:(unsigned long long)arg1;
- (void)setEvents:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)start;
- (void)startLocal;
- (void)startRemote;
- (void)stop;
- (void)stopLocal;
- (void)stopRemote;
- (bool)streamEvent:(id)arg1 error:(id)arg2;

@end
