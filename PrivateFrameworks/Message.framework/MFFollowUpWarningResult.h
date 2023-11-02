
@interface MFFollowUpWarningResult : NSObject {
    NSError * _error;
    SGMailIntelligenceFollowUpWarning * _followUpWarning;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) SGMailIntelligenceFollowUpWarning *followUpWarning;

- (void).cxx_destruct;
- (id)error;
- (id)followUpWarning;
- (id)initWithFollowUpWarning:(id)arg1 error:(id)arg2;

@end
