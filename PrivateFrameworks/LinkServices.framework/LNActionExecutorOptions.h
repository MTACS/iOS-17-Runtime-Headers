
@interface LNActionExecutorOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsPrepareBeforePerform;
    NSString * _clientLabel;
    double  _connectionOperationTimeout;
    bool  _donateToTranscript;
    LNEnvironment * _environment;
    NSUUID * _executionUUID;
    long long  _interactionMode;
    long long  _kind;
    bool  _requestUnlockIfNeeded;
    unsigned short  _source;
    LNSystemContext * _systemContext;
    NSNumber * _viewActionIdentifier;
}

@property (nonatomic) bool allowsPrepareBeforePerform;
@property (nonatomic, copy) NSString *clientLabel;
@property (nonatomic) double connectionOperationTimeout;
@property (nonatomic) bool donateToTranscript;
@property (nonatomic, copy) LNEnvironment *environment;
@property (nonatomic, copy) NSUUID *executionUUID;
@property (nonatomic) long long interactionMode;
@property (nonatomic) long long kind;
@property (nonatomic) bool requestUnlockIfNeeded;
@property (nonatomic) unsigned short source;
@property (nonatomic, copy) LNSystemContext *systemContext;
@property (nonatomic, copy) NSNumber *viewActionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsPrepareBeforePerform;
- (id)clientLabel;
- (double)connectionOperationTimeout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)donateToTranscript;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)executionUUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)interactionMode;
- (long long)kind;
- (bool)requestUnlockIfNeeded;
- (void)setAllowsPrepareBeforePerform:(bool)arg1;
- (void)setClientLabel:(id)arg1;
- (void)setConnectionOperationTimeout:(double)arg1;
- (void)setDonateToTranscript:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExecutionUUID:(id)arg1;
- (void)setInteractionMode:(long long)arg1;
- (void)setKind:(long long)arg1;
- (void)setRequestUnlockIfNeeded:(bool)arg1;
- (void)setSource:(unsigned short)arg1;
- (void)setSystemContext:(id)arg1;
- (void)setViewActionIdentifier:(id)arg1;
- (unsigned short)source;
- (id)systemContext;
- (id)viewActionIdentifier;

@end
