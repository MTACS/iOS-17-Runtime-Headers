
@interface SBSystemActionSuppressionManagerState : NSObject {
    bool  _canUsePocketStateForSuppression;
    bool  _isEligibleForViewObstructionEvents;
    SBSystemActionSuppressionStatus * _suppressionStatus;
}

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;

@end
