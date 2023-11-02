
@protocol SBSSwitcherDemoCommandsClientToServerInterface <NSObject>

@required

- (bool)loadStashedSwitcherModelFromPath:(NSString *)arg1;
- (bool)setShouldDisableSwitcherModelUpdates:(NSNumber *)arg1;
- (bool)stashSwitcherModelToPath:(NSString *)arg1;
- (bool)updateHiddenApplicationBundleIDs:(NSArray<__NSString__> *)arg1;

@end
