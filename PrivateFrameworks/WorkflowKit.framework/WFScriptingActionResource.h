
@interface WFScriptingActionResource : WFResource {
    WFSecuredPreferences * _securedPreferences;
}

@property (nonatomic, readonly) WFSecuredPreferences *securedPreferences;

+ (bool)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)arg1;
- (void)preferencesUpdated:(id)arg1;
- (void)refreshAvailability;
- (id)securedPreferences;

@end
