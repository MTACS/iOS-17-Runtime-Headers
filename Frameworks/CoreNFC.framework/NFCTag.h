
@interface NFCTag : NSObject <NFCNDEFTag, NFCTag> {
    long long  _configuration;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NFCHardwareManager * _hardwareManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _sessionKey;
    <NFTag> * _tag;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) long long configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NFCHardwareManager *hardwareManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)_MaxRetry;
+ (double)_MaxRetryInterval;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_connectWithCompletionHandler:(id /* block */)arg1;
- (bool)_connectWithSession:(id)arg1 outError:(id*)arg2;
- (bool)_disconnectWithError:(id*)arg1;
- (id)_getInternalReaderSession;
- (void)_sendAPDU:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setSession:(id)arg1;
- (void)_setTag:(id)arg1;
- (void)_transceiveWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_transceiveWithSession:(id)arg1 sendData:(id)arg2 receivedData:(id*)arg3 error:(id*)arg4;
- (id)applicationData;
- (id)asNFCFeliCaTag;
- (id)asNFCISO15693Tag;
- (id)asNFCISO7816Tag;
- (id)asNFCMiFareTag;
- (unsigned long long)capacity;
- (long long)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)disconnect;
- (void)dispatchOnDelegateQueueAsync:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareManager;
- (id)historicalBytes;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;
- (bool)isAvailable;
- (bool)isEqualToNFTag:(id)arg1;
- (bool)isMatchingSession:(id)arg1 outError:(id*)arg2;
- (bool)isNDEFFormatted;
- (bool)isReadOnly;
- (bool)proprietaryApplicationDataCoding;
- (void)queryNDEFStatusWithCompletionHandler:(id /* block */)arg1;
- (void)readNDEFWithCompletionHandler:(id /* block */)arg1;
- (id)selectedAID;
- (id)session;
- (id)systemCode;
- (unsigned long long)type;
- (void)writeLockWithCompletionHandler:(id /* block */)arg1;
- (void)writeNDEF:(id)arg1 completionHandler:(id /* block */)arg2;

@end
