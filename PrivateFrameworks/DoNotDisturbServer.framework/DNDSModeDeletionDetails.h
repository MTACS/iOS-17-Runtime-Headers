
@interface DNDSModeDeletionDetails : NSObject {
    NSSet * _applicationIdentifiers;
    NSSet * _modeSpecificSettings;
}

@property (nonatomic, copy) NSSet *applicationIdentifiers;
@property (nonatomic, copy) NSSet *modeSpecificSettings;

- (void).cxx_destruct;
- (id)applicationIdentifiers;
- (id)modeSpecificSettings;
- (void)setApplicationIdentifiers:(id)arg1;
- (void)setModeSpecificSettings:(id)arg1;

@end
