
@interface NFRunScriptParametersInternal : NSObject <NSSecureCoding> {
    NSArray * _AIDAllowList;
    bool  _checkAIDAllowList;
    bool  _deactivateAllApps;
    bool  _disableCompletionNotification;
    bool  _includeAPDUDuration;
    bool  _initialSelectBeforeRun;
    unsigned long long  _outFinalSWStatus;
    double  _outTotalAPDUExecutionDuration;
    NSString * _seid;
    bool  _toSystemOS;
}

@property (nonatomic, retain) NSArray *AIDAllowList;
@property (nonatomic) bool checkAIDAllowList;
@property (nonatomic) bool deactivateAllApps;
@property (nonatomic) bool disableCompletionNotification;
@property (nonatomic) bool includeAPDUDuration;
@property (nonatomic) bool initialSelectBeforeRun;
@property (nonatomic) unsigned long long outFinalSWStatus;
@property (nonatomic) double outTotalAPDUExecutionDuration;
@property (nonatomic, retain) NSString *seid;
@property (nonatomic) bool toSystemOS;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)AIDAllowList;
- (bool)checkAIDAllowList;
- (bool)deactivateAllApps;
- (bool)disableCompletionNotification;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAPDUDuration;
- (id)initWithCoder:(id)arg1;
- (bool)initialSelectBeforeRun;
- (unsigned long long)outFinalSWStatus;
- (double)outTotalAPDUExecutionDuration;
- (id)seid;
- (void)setAIDAllowList:(id)arg1;
- (void)setCheckAIDAllowList:(bool)arg1;
- (void)setDeactivateAllApps:(bool)arg1;
- (void)setDisableCompletionNotification:(bool)arg1;
- (void)setIncludeAPDUDuration:(bool)arg1;
- (void)setInitialSelectBeforeRun:(bool)arg1;
- (void)setOutFinalSWStatus:(unsigned long long)arg1;
- (void)setOutTotalAPDUExecutionDuration:(double)arg1;
- (void)setSeid:(id)arg1;
- (void)setToSystemOS:(bool)arg1;
- (bool)toSystemOS;

@end
