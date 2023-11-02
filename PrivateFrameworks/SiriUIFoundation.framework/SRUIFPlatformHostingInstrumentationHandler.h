
@interface SRUIFPlatformHostingInstrumentationHandler : NSObject {
    AFAnalyticsTurnBasedInstrumentationContext * _bringUpTurnIdentifier;
    <SRUIFPlatformHostingInstrumentationHandlerDelegate> * _delegate;
    AFAnalyticsTurnBasedInstrumentationContext * _dismissalTurnIdentifier;
    NSMutableDictionary * _machAbsoluteForAppearances;
}

- (void).cxx_destruct;
- (void)_computeStateAndInstrumentIfNecessaryForEvent:(unsigned long long)arg1;
- (void)_instrumentForappearanceEvent:(unsigned long long)arg1 turn:(id)arg2 machAbolsuteTime:(unsigned long long)arg3;
- (void)appearanceDidChange:(unsigned long long)arg1 machAbsoluteTime:(unsigned long long)arg2;
- (void)hostingBringUpProcessedWithTurnIdenitfier:(id)arg1;
- (void)hostingDismissalProcessedWithTurnIdenitfier:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
