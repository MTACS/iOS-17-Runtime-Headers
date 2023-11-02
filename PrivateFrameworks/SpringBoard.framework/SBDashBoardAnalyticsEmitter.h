
@interface SBDashBoardAnalyticsEmitter : NSObject <CSExternalEventHandling> {
    CSCoverSheetViewController * _coverSheetViewController;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)conformsToCSEventHandling;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (bool)handleEvent:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (long long)participantState;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
