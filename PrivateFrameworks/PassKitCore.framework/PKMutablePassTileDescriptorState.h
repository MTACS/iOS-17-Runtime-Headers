
@interface PKMutablePassTileDescriptorState : PKPassTileDescriptorState

@property (getter=isEnabled, nonatomic) unsigned long long enabled;
@property (getter=isInProgress, nonatomic) bool inProgress;
@property (nonatomic, copy) NSString *stateIdentifier;
@property (nonatomic, retain) PKPassTileState *stateOverride;
@property (getter=isSupported, nonatomic) bool supported;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnabled:(unsigned long long)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setStateIdentifier:(id)arg1;
- (void)setStateOverride:(id)arg1;
- (void)setSupported:(bool)arg1;

@end
