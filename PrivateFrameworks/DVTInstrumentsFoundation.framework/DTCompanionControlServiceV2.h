
@interface DTCompanionControlServiceV2 : DTXService <DTCompanionControlServiceV2API>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)instantiateServiceWithChannel:(id)arg1;
+ (void)registerCapabilities:(id)arg1;
+ (void)setSockPuppetSymbols:(struct { id *x1; id *x2; id *x3; id *x4; id *x5; id *x6; id *x7; int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); })arg1;
+ (struct { id *x1; id *x2; id *x3; id *x4; id *x5; id *x6; id *x7; int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); })sockPuppetSymbols;

- (id)_launchModeTranslationsMap;
- (id)launchWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;
- (id)terminateWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;
- (id)willInstallWatchAppForCompanionIdentifier:(id)arg1;

@end
