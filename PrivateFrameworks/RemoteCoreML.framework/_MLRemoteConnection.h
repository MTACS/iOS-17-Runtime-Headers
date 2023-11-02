
@interface _MLRemoteConnection : NSObject {
    NSObject<OS_nw_connection> * _connection;
    unsigned long long  _jobCount;
    _MLNetworking * _nwObj;
    _MLNetworkOptions * _nwOptions;
    NSMutableData * _outputResult;
    _MLNetworkPacket * _packet;
    NSObject<OS_dispatch_queue> * _q;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, readonly) NSObject<OS_nw_connection> *connection;
@property (nonatomic, readonly) unsigned long long jobCount;
@property (nonatomic, readonly) _MLNetworking *nwObj;
@property (nonatomic, readonly) _MLNetworkOptions *nwOptions;
@property (nonatomic, retain) NSMutableData *outputResult;
@property (nonatomic, readonly) _MLNetworkPacket *packet;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

- (void).cxx_destruct;
- (id)connection;
- (void)doReceive:(id)arg1 context:(id)arg2 isComplete:(bool)arg3 error:(id)arg4;
- (id)initWithOptions:(id)arg1;
- (unsigned long long)jobCount;
- (bool)loadFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)nwObj;
- (id)nwOptions;
- (id)outputResult;
- (id)packet;
- (bool)predictionFromURL:(id)arg1 features:(id)arg2 output:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)q;
- (id)semaphore;
- (void)send:(id)arg1 options:(id)arg2;
- (bool)sendDataAndWaitForAcknowledgementOrTimeout:(id)arg1;
- (void)setOutputResult:(id)arg1;
- (bool)unloadFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
