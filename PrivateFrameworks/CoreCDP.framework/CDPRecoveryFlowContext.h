
@interface CDPRecoveryFlowContext : NSObject <NSCopying, NSSecureCoding> {
    CDPContext * _context;
    bool  _hasPeersForRemoteApproval;
    bool  _isWalrusEnabled;
    double  _rpdProbationDuration;
}

@property (nonatomic, retain) CDPContext *context;
@property (nonatomic) bool hasPeersForRemoteApproval;
@property (nonatomic) bool isWalrusEnabled;
@property (nonatomic) double rpdProbationDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPeersForRemoteApproval;
- (id)initWithCoder:(id)arg1;
- (bool)isWalrusEnabled;
- (double)rpdProbationDuration;
- (void)setContext:(id)arg1;
- (void)setHasPeersForRemoteApproval:(bool)arg1;
- (void)setIsWalrusEnabled:(bool)arg1;
- (void)setRpdProbationDuration:(double)arg1;

@end
