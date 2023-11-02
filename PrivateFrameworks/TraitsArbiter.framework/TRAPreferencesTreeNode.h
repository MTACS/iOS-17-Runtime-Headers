
@interface TRAPreferencesTreeNode : NSObject <BSDescriptionProviding, TRAPreferencesTreeNode> {
    NSArray * _children;
    double  _order;
    <TRAPreferencesTreeNode> * _parent;
    TRAParticipant * _participant;
    NSString * _role;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugLastOrientationSettingsValidationFailureReason;
@property (nonatomic) bool debugLastSettingsWereValidated;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double order;
@property (nonatomic) <TRAPreferencesTreeNode> *parent;
@property (nonatomic, readonly, copy) TRAParticipant *participant;
@property (nonatomic, readonly, copy) NSString *role;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_participant;
- (void)addChild:(id)arg1;
- (id)children;
- (id)debugLastOrientationSettingsValidationFailureReason;
- (bool)debugLastSettingsWereValidated;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (double)order;
- (id)parent;
- (id)participant;
- (id)role;
- (void)setChildren:(id)arg1;
- (void)setDebugLastOrientationSettingsValidationFailureReason:(id)arg1;
- (void)setDebugLastSettingsWereValidated:(bool)arg1;
- (void)setOrder:(double)arg1;
- (void)setParent:(id)arg1;
- (id)settingsUpdater;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

@end
