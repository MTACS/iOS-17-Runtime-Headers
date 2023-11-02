
@interface MMCSController : NSObject {
    struct __CFURL { } * _chunkStoreURL;
    long long  _connectionBehavior;
    unsigned long long  _currentItemID;
    struct _mmcs_engine { } * _engine;
    id  _powerAssertion;
    NSTimer * _powerAssertionTimer;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSMutableDictionary * _requestIDToBlockMap;
    NSMutableDictionary * _requestIDToRemainingTransfersMap;
    NSMutableDictionary * _requestIDToTransfersMap;
    NSRecursiveLock * _transferIDContextMapLock;
    NSMutableDictionary * _transferIDToContextMap;
    NSMutableDictionary * _transferToRequestIDsMap;
    NSMutableDictionary * _transfers;
}

@property long long connectionBehavior;
@property (readonly) bool isActive;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;
@property (retain) NSRecursiveLock *transferIDContextMapLock;
@property (readonly) NSMutableDictionary *transferIDToContextMap;
@property (readonly) NSMutableDictionary *transfers;

+ (id)parseContentHeaderAsDictionary:(id)arg1 treatValuesAsArrays:(bool)arg2;
+ (void)preMMCSWarm;
+ (id)serialControllerQueue;

- (id)_MMCSICloudRequestHeadersCopy:(struct __CFString { }*)arg1;
- (void)_addPreauthorizationOptions:(id)arg1 forFiles:(id)arg2;
- (void)_addRequestorContext:(id)arg1 transferID:(id)arg2;
- (void)_cancelRequest:(id)arg1;
- (struct _mmcs_engine { }*)_engine;
- (void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (bool)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 sourceAppID:(id)arg4 token:(id)arg5 error:(id*)arg6;
- (void)_handleRegistrationForMMCSPutFile:(id)arg1 preauthenticate:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_invalidatePowerAssertionTimer;
- (void)_itemCompleted:(id)arg1;
- (id)_optionsForFiles:(id)arg1 sourceAppID:(id)arg2;
- (void)_processCompletedItem:(id)arg1 error:(id)arg2;
- (void)_putItemCompleted:(id)arg1 error:(id)arg2;
- (void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (bool)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 token:(id)arg6 error:(id*)arg7;
- (void)_registerFiles:(id)arg1 preauthenticate:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_registerPowerAssertionIfNeeded;
- (void)_registerTransfers:(id)arg1 preauthenticate:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)_registeredTransferForGUID:(id)arg1;
- (id)_registeredTransferForItemID:(unsigned long long)arg1;
- (void)_releasePowerAssertion;
- (void)_releasePowerAssertionAndSimulateCrash;
- (void)_removeRequestorContext:(id)arg1 transferID:(id)arg2;
- (void)_schedulePowerAssertionTimer;
- (void)_setScheduledTransfers:(id)arg1 block:(id /* block */)arg2;
- (void)_unregisterPowerAssertion;
- (bool)_unregisterTransfers:(id)arg1;
- (void)cancelPutRequestID:(id)arg1;
- (long long)connectionBehavior;
- (void)dealloc;
- (id)getContentHeadersAsString;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 sourceAppID:(id)arg4 authToken:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)initWithQueue:(id)arg1;
- (bool)isActive;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 authToken:(id)arg6 preauthenticate:(bool)arg7 completionBlock:(id /* block */)arg8;
- (void)registerFilesForDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerFilesForUpload:(id)arg1 withPreauthentication:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)replyQueue;
- (void)setConnectionBehavior:(long long)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setTransferIDContextMapLock:(id)arg1;
- (id)transferIDContextMapLock;
- (id)transferIDToContextMap;
- (id)transfers;
- (bool)unregisterFiles:(id)arg1;

@end
