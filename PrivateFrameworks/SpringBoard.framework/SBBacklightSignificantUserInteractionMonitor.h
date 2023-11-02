
@interface SBBacklightSignificantUserInteractionMonitor : NSObject <CSExternalEventHandling> {
    CSCoverSheetViewController * _coverSheetViewController;
    NSHashTable * _observers;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserversOfSignificantUserInteraction;
- (void)addObserver:(id)arg1;
- (void)conformsToCSEventHandling;
- (id)coverSheetIdentifier;
- (id)coverSheetViewController;
- (bool)handleEvent:(id)arg1;
- (long long)participantState;
- (void)removeObserver:(id)arg1;
- (void)setCoverSheetViewController:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
