
@interface NEFilterFlow : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSObject<OS_xpc_object> * _connection;
    NSData * _crypto_signature;
    NEFilterAbsoluteVerdict * _currentVerdict;
    long long  _direction;
    int  _epid;
    NSUUID * _flowUUID;
    unsigned long long  _inBytes;
    bool  _inputComplete;
    bool  _isPaused;
    bool  _isRemediationFlow;
    unsigned long long  _outBytes;
    bool  _outputComplete;
    int  _pid;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reportAtEnd;
    NSMutableArray * _savedMessageHandlerQueue;
    NSData * _sourceAppAuditToken;
    NSString * _sourceAppIdentifier;
    bool  _sourceAppIdentifierFromApp;
    NSData * _sourceAppUniqueIdentifier;
    NSString * _sourceAppVersion;
    NSData * _sourceProcessAuditToken;
}

@property (copy) NSURL *URL;
@property (retain) NSData *crypto_signature;
@property long long direction;
@property (readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *identifierString;
@property unsigned long long inBytes;
@property bool inputComplete;
@property unsigned long long outBytes;
@property bool outputComplete;
@property (retain) NSData *sourceAppAuditToken;
@property (copy) NSString *sourceAppIdentifier;
@property (copy) NSData *sourceAppUniqueIdentifier;
@property (copy) NSString *sourceAppVersion;
@property (retain) NSData *sourceProcessAuditToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)crypto_signature;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)identifierString;
- (unsigned long long)inBytes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2;
- (bool)inputComplete;
- (unsigned long long)outBytes;
- (bool)outputComplete;
- (void)setCrypto_signature:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setInBytes:(unsigned long long)arg1;
- (void)setInputComplete:(bool)arg1;
- (void)setOutBytes:(unsigned long long)arg1;
- (void)setOutputComplete:(bool)arg1;
- (void)setSourceAppAuditToken:(id)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setSourceAppUniqueIdentifier:(id)arg1;
- (void)setSourceAppVersion:(id)arg1;
- (void)setSourceProcessAuditToken:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sourceAppAuditToken;
- (id)sourceAppIdentifier;
- (id)sourceAppUniqueIdentifier;
- (id)sourceAppVersion;
- (id)sourceProcessAuditToken;

@end
