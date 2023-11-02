
@interface SBSystemActionSuppressionManagerStateReducer : NSObject {
    long long  _displayState;
    bool  _isAlwaysOnDisplayEnabled;
    long long  _pocketState;
    id /* block */  _reduceBlock;
    SBSystemAction * _selectedAction;
    long long  _viewObstructionEligibility;
    SBSystemActionViewObstructionState * _viewObstructionState;
}

- (void).cxx_destruct;
- (id)_buildSuppressionMetrics;
- (id)_reduceState;

@end
