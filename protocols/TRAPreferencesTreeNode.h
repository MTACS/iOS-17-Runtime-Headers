
@protocol TRAPreferencesTreeNode <NSObject>

@required

- (void)addChild:(id <TRAPreferencesTreeNode>)arg1;
- (NSArray *)children;
- (NSString *)debugLastOrientationSettingsValidationFailureReason;
- (bool)debugLastSettingsWereValidated;
- (double)order;
- (<TRAPreferencesTreeNode> *)parent;
- (TRAParticipant *)participant;
- (NSString *)role;
- (void)setChildren:(NSArray *)arg1;
- (void)setDebugLastOrientationSettingsValidationFailureReason:(NSString *)arg1;
- (void)setDebugLastSettingsWereValidated:(bool)arg1;
- (void)setOrder:(double)arg1;
- (void)setParent:(id <TRAPreferencesTreeNode>)arg1;
- (<TRASettingsUpdating> *)settingsUpdater;
- (NSString *)uniqueIdentifier;

@end
