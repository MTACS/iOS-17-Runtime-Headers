
@interface SBTipsHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {
    SBIconController * _iconController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconController *iconController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)homeScreenUsageAggregatorDidNoteEditingModeEntered:(id)arg1;
- (id)iconController;
- (id)initWithIconController:(id)arg1;

@end
