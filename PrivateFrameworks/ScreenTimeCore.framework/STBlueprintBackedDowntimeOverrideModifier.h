
@interface STBlueprintBackedDowntimeOverrideModifier : NSObject <STDowntimeOverrideModifier> {
    STBlueprint * _downtimeBlueprint;
}

@property (readonly, copy) STDowntimeOverride *activeOverride;
@property (readonly) STBlueprint *downtimeBlueprint;

- (void).cxx_destruct;
- (void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:(id)arg1;
- (bool)_saveWithError:(id*)arg1;
- (void)_tombstoneDowntimeOverride;
- (id)activeOverride;
- (bool)applyDowntimeOverride:(id)arg1 error:(id*)arg2;
- (id)downtimeBlueprint;
- (id)initWithDowntimeBlueprint:(id)arg1;
- (bool)removeDowntimeOverrideWithError:(id*)arg1;

@end
