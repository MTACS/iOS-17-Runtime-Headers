
@interface HAPSecuritySession : HMFObject <HAPEncryptedSession, HMFLogging> {
    NSDictionary * _additionalDerivedKeys;
    NSData * _broadcastKey;
    <HAPSecuritySessionDelegate> * _delegate;
    HAPSecuritySessionEncryption * _encryption;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct PairingSessionPrivate { } * _pairingSession;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _resumeSessionID;
    unsigned long long  _role;
    unsigned long long  _sessionStartTime;
    unsigned long long  _state;
}

@property (readonly) NSDictionary *additionalDerivedKeys;
@property (readonly) NSData *broadcastKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPSecuritySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPSecuritySessionEncryption *encryption;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, readonly) bool open;
@property (getter=isOpening, readonly) bool opening;
@property (nonatomic) struct PairingSessionPrivate { }*pairingSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (nonatomic, readonly) unsigned long long role;
@property (readonly) unsigned long long sessionStartTime;
@property unsigned long long state;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_broadcastInfo;
- (void)_closeWithError:(id)arg1;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int*)arg2;
- (void)_handleSetupExchangeComplete;
- (bool)_initializeSetupSession:(unsigned long long)arg1;
- (void)_initiateClientSessionSetupExchange;
- (id)_inputInfo;
- (void)_notifyOpened;
- (void)_notifyOpening;
- (id)_outputInfo;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)additionalDerivedKeys;
- (id)broadcastKey;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (id)description;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)encryption;
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;
- (bool)isOpen;
- (bool)isOpening;
- (id)logIdentifier;
- (void)open;
- (struct PairingSessionPrivate { }*)pairingSession;
- (id)queue;
- (void)reallyOpen;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (unsigned long long)resumeSessionID;
- (unsigned long long)role;
- (unsigned long long)sessionStartTime;
- (void)setAdditionalDerivedKeys:(id)arg1;
- (void)setBroadcastKey:(id)arg1;
- (void)setEncryption:(id)arg1;
- (void)setPairingSession:(struct PairingSessionPrivate { }*)arg1;
- (void)setResumeSessionID:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
