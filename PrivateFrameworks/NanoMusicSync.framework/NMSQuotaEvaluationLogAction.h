
@interface NMSQuotaEvaluationLogAction : NMLogAction {
    NMSQuotaEvaluationState * _state;
    unsigned long long  _type;
}

+ (id)logActionWithActionType:(unsigned long long)arg1 state:(id)arg2;

- (void).cxx_destruct;
- (id)_identifierLogMessage;
- (id)_stringForType:(unsigned long long)arg1;
- (id)initWithActionType:(unsigned long long)arg1 state:(id)arg2;
- (id)logMessage;

@end
