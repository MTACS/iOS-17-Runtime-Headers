
@interface QuickTypeWeightUpdates : NSObject {
    NSNumber * _l2Norm;
    NSNumber * _maxNorm;
    NSString * _privacyDiagnosticReport;
    NSData * _weightUpdates;
    NSString * _weightUpdatesDiagnosticReport;
}

@property (nonatomic, copy) NSNumber *l2Norm;
@property (nonatomic, copy) NSNumber *maxNorm;
@property (nonatomic, copy) NSString *privacyDiagnosticReport;
@property (nonatomic, retain) NSData *weightUpdates;
@property (nonatomic, copy) NSString *weightUpdatesDiagnosticReport;

- (void).cxx_destruct;
- (id)l2Norm;
- (id)maxNorm;
- (id)privacyDiagnosticReport;
- (void)setL2Norm:(id)arg1;
- (void)setMaxNorm:(id)arg1;
- (void)setPrivacyDiagnosticReport:(id)arg1;
- (void)setWeightUpdates:(id)arg1;
- (void)setWeightUpdatesDiagnosticReport:(id)arg1;
- (id)weightUpdates;
- (id)weightUpdatesDiagnosticReport;

@end
