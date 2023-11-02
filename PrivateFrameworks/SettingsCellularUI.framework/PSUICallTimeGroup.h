
@interface PSUICallTimeGroup : NSObject <Loggable> {
    CHManager * _callHistoryManager;
    PSSpecifier * _currentCallTimeSpecifier;
    PSSpecifier * _groupSpecifier;
    PSListController * _hostController;
    PSSpecifier * _lifetimeCallTimeSpecifier;
}

@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) PSSpecifier *currentCallTimeSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSSpecifier *lifetimeCallTimeSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callHistoryManager;
- (id)callTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(bool)arg1;
- (id)currentCallTimeSpecifier;
- (id)getLogger;
- (id)groupSpecifier;
- (void)handleCallTimersChanged;
- (id)hostController;
- (id)initWithListController:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)lifetimeCallTimeSpecifier;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCurrentCallTimeSpecifier:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setLifetimeCallTimeSpecifier:(id)arg1;
- (id)specifiers;

@end
