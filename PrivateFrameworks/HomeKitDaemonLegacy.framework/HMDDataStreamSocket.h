
@interface HMDDataStreamSocket : NSObject <HMDDataStreamSocketPrivate, HMFLogging> {
    NSString * _applicationProtocolName;
    bool  _closed;
    bool  _closing;
    <HMDDataStreamSocketDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingReads;
    HMDDataStreamStreamProtocol * _streamProtocol;
    unsigned long long  _trafficClass;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSString *applicationProtocolName;
@property (getter=isClosed, nonatomic) bool closed;
@property (getter=isClosing, nonatomic) bool closing;
@property (readonly, copy) NSString *debugDescription;
@property <HMDDataStreamSocketDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableArray *pendingReads;
@property (readonly) HMDDataStreamStreamProtocol *streamProtocol;
@property (readonly) Class superclass;
@property unsigned long long trafficClass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_writeData:(id)arg1 completion:(id /* block */)arg2;
- (id)applicationProtocolName;
- (void)close;
- (void)closeInitiated;
- (void)closeWithError:(id)arg1;
- (id)delegate;
- (void)handleIncomingData:(id)arg1;
- (id)initWithStreamProtocol:(id)arg1 applicationProtocolName:(id)arg2 workQueue:(id)arg3;
- (bool)isClosed;
- (bool)isClosing;
- (id)pendingReads;
- (id)readData;
- (void)setClosed:(bool)arg1;
- (void)setClosing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (id)streamProtocol;
- (unsigned long long)trafficClass;
- (id)workQueue;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;
- (bool)writeData:(id)arg1 error:(id*)arg2;

@end
