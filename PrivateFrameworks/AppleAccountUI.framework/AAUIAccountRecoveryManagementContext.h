
@interface AAUIAccountRecoveryManagementContext : NSObject {
    NSString * _icloudDataRecoveryDetailsHTTPMethod;
    NSURL * _icloudDataRecoveryDetailsURL;
    NSString * _icloudDataRecoveryReAddHTTPMethod;
    NSURL * _icloudDataRecoveryReAddURL;
    NSString * _icloudDataRecoveryRowLabel;
    bool  _icloudDataRecoveryShouldShowRow;
    NSURL * _learnMoreURL;
    bool  _recoveryKeyEligible;
    NSString * _recoveryKeyHTTPMethod;
    bool  _recoveryKeyIsOn;
    NSURL * _recoveryKeyURL;
}

@property (nonatomic, copy) NSString *icloudDataRecoveryDetailsHTTPMethod;
@property (nonatomic, retain) NSURL *icloudDataRecoveryDetailsURL;
@property (nonatomic, copy) NSString *icloudDataRecoveryReAddHTTPMethod;
@property (nonatomic, retain) NSURL *icloudDataRecoveryReAddURL;
@property (nonatomic, copy) NSString *icloudDataRecoveryRowLabel;
@property (nonatomic) bool icloudDataRecoveryShouldShowRow;
@property (nonatomic, retain) NSURL *learnMoreURL;
@property (nonatomic) bool recoveryKeyEligible;
@property (nonatomic, copy) NSString *recoveryKeyHTTPMethod;
@property (nonatomic) bool recoveryKeyIsOn;
@property (nonatomic, retain) NSURL *recoveryKeyURL;

- (void).cxx_destruct;
- (id)description;
- (id)icloudDataRecoveryDetailsHTTPMethod;
- (id)icloudDataRecoveryDetailsURL;
- (id)icloudDataRecoveryReAddHTTPMethod;
- (id)icloudDataRecoveryReAddURL;
- (id)icloudDataRecoveryRowLabel;
- (bool)icloudDataRecoveryShouldShowRow;
- (id)learnMoreURL;
- (bool)recoveryKeyEligible;
- (id)recoveryKeyHTTPMethod;
- (bool)recoveryKeyIsOn;
- (id)recoveryKeyURL;
- (void)setIcloudDataRecoveryDetailsHTTPMethod:(id)arg1;
- (void)setIcloudDataRecoveryDetailsURL:(id)arg1;
- (void)setIcloudDataRecoveryReAddHTTPMethod:(id)arg1;
- (void)setIcloudDataRecoveryReAddURL:(id)arg1;
- (void)setIcloudDataRecoveryRowLabel:(id)arg1;
- (void)setIcloudDataRecoveryShouldShowRow:(bool)arg1;
- (void)setLearnMoreURL:(id)arg1;
- (void)setRecoveryKeyEligible:(bool)arg1;
- (void)setRecoveryKeyHTTPMethod:(id)arg1;
- (void)setRecoveryKeyIsOn:(bool)arg1;
- (void)setRecoveryKeyURL:(id)arg1;

@end
