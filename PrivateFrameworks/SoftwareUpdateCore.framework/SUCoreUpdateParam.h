
@interface SUCoreUpdateParam : NSObject <NSSecureCoding> {
    SUCoreProgress * _applyProgress;
    SUCoreProgress * _downloadProgress;
    NSError * _error;
    SUCorePolicy * _policy;
    SUCoreProgress * _prepareProgress;
    long long  _resultCode;
    SUCoreRollback * _rollback;
    long long  _targetPhase;
}

@property (nonatomic, retain) SUCoreProgress *applyProgress;
@property (nonatomic, retain) SUCoreProgress *downloadProgress;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) SUCorePolicy *policy;
@property (nonatomic, retain) SUCoreProgress *prepareProgress;
@property (nonatomic) long long resultCode;
@property (nonatomic, retain) SUCoreRollback *rollback;
@property (nonatomic) long long targetPhase;

+ (bool)supportsSecureCoding;
+ (id)targetPhaseName:(long long)arg1;
+ (id)targetRollbackPhaseName:(long long)arg1;

- (void).cxx_destruct;
- (id)applyProgress;
- (id)copy;
- (id)description;
- (id)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initTargetPhase:(long long)arg1 policy:(id)arg2 downloadProgress:(id)arg3 prepareProgress:(id)arg4 applyProgress:(id)arg5 rollback:(id)arg6 resultCode:(long long)arg7 error:(id)arg8;
- (id)initTargetPhase:(long long)arg1 withPolicy:(id)arg2;
- (id)initWithApplyProgress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadProgress:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithPrepareProgress:(id)arg1;
- (id)initWithRollback:(id)arg1 withError:(id)arg2;
- (id)initWithRollback:(id)arg1 withPolicy:(id)arg2;
- (id)policy;
- (id)prepareProgress;
- (long long)resultCode;
- (id)rollback;
- (void)setApplyProgress:(id)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setPrepareProgress:(id)arg1;
- (void)setResultCode:(long long)arg1;
- (void)setRollback:(id)arg1;
- (void)setTargetPhase:(long long)arg1;
- (id)summary;
- (long long)targetPhase;

@end
