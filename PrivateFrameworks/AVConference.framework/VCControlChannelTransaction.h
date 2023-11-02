
@interface VCControlChannelTransaction : VCObject {
    bool  _isConfirmed;
    bool  _isFlushed;
    NSNumber * _participantID;
    unsigned int  _sessionID;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _transactionDone;
    unsigned long long  _transactionID;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _transactionLock;
    <VCControlChannelTransactionDelegate> * _weakTransactionDelegate;
}

+ (bool)sendUnreliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionID:(id)arg4 transactionDelegate:(id)arg5 withOptions:(id)arg6;

- (void)confirmedTransactionByParticipantID:(id)arg1 sessionID:(unsigned int)arg2;
- (void)dealloc;
- (void)flushTransaction;
- (id)initWithTransportSessionID:(unsigned int)arg1 participantID:(id)arg2 transactionID:(unsigned long long)arg3 transactionDelegate:(id)arg4;
- (unsigned int)retryCountUsingFastRetries:(bool)arg1;
- (float)retryTimeoutForRetryAttempt:(unsigned int)arg1 usingFastRetries:(bool)arg2;
- (bool)sendReliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 timeout:(id)arg4 useFastRetries:(bool)arg5 withOptions:(id)arg6;

@end
