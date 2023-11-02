
@interface HAPNFCReaderXPC : HMFObject {
    NSObject<OS_xpc_object> * _event;
    <HAPNFCReaderStream> * _readerStream;
    unsigned long long  _source;
    NSString * _stream;
    bool  _supportsBackgroundReading;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) NSObject<OS_xpc_object> *event;
@property (retain) <HAPNFCReaderStream> *readerStream;
@property unsigned long long source;
@property (retain) NSString *stream;
@property (nonatomic, readonly) bool supportsBackgroundReading;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)beginSession;
- (id)event;
- (id)initReaderWithStream:(id)arg1 fromSource:(unsigned long long)arg2 workQueue:(id)arg3 readerStream:(id)arg4;
- (id)readerStream;
- (void)setEvent:(id)arg1;
- (void)setReaderStream:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStream:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (unsigned long long)source;
- (id)stream;
- (bool)supportsBackgroundReading;
- (id)workQueue;

@end
