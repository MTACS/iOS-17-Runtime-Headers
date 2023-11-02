
@interface MTSAuthorization : NSObject {
    MTSXPCServerProxy * _serverProxy;
}

@property (getter=isRestrictedCharacteristicsAccessAllowed, readonly) bool restrictedCharacteristicsAccessAllowed;
@property (readonly) MTSXPCServerProxy *serverProxy;

+ (bool)isDeveloperModeEnabled;

- (void).cxx_destruct;
- (bool)allowsRestrictedCharacteristicsAccessViaDeveloperModeProfile;
- (bool)allowsRestrictedCharacteristicsAccessViaSkipDeveloperModeRestrictionProfile;
- (id)init;
- (id)initWithServerProxy:(id)arg1;
- (bool)isRestrictedCharacteristicsAccessAllowed;
- (id)serverProxy;

@end
