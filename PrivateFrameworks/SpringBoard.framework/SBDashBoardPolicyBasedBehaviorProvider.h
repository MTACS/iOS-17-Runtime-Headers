
@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding> {
    CSCoverSheetViewController * _coverSheetViewController;
    id  _notificationToken;
    SBMainDisplayPolicyAggregator * _policyAggregator;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_cameraRestrictions;
- (unsigned long long)_restrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSExternalBehaviorProviding;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (id)initWithCoverSheetViewController:(id)arg1 policyAggregator:(id)arg2;
- (long long)notificationBehavior;
- (long long)participantState;
- (long long)proximityDetectionMode;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;

@end
