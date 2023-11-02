
@interface SBApplicationShortcutReportRecipe : NSObject <SBTestRecipe>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_dumpReport;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
