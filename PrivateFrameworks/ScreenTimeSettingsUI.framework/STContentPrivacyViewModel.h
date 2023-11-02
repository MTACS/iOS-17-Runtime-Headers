
@interface STContentPrivacyViewModel : NSObject {
    STCommunicationLimits * _communicationLimits;
    bool  _isLoaded;
    bool  _isLocalDevice;
    bool  _restrictionsEnabled;
    bool  _shouldAllowEditing;
    NSNumber * _userDSID;
    bool  _userIsManaged;
    bool  _userIsRemote;
    NSString * _userName;
    unsigned long long  _userType;
    NSMutableDictionary * _valuesByRestriction;
    NSSet * _visibleRestrictions;
}

@property (retain) STCommunicationLimits *communicationLimits;
@property (nonatomic) bool isLoaded;
@property (nonatomic) bool isLocalDevice;
@property (nonatomic) bool restrictionsEnabled;
@property (nonatomic) bool shouldAllowEditing;
@property (nonatomic, copy) NSNumber *userDSID;
@property bool userIsManaged;
@property bool userIsRemote;
@property (nonatomic, copy) NSString *userName;
@property unsigned long long userType;
@property (nonatomic, retain) NSMutableDictionary *valuesByRestriction;
@property (nonatomic, copy) NSSet *visibleRestrictions;

- (void).cxx_destruct;
- (id)communicationLimits;
- (id)defaultValueForRestriction:(id)arg1;
- (id)init;
- (bool)isLoaded;
- (bool)isLocalDevice;
- (bool)restrictionsEnabled;
- (void)setCommunicationLimits:(id)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setIsLocalDevice:(bool)arg1;
- (void)setRestrictionsEnabled:(bool)arg1;
- (void)setShouldAllowEditing:(bool)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserIsManaged:(bool)arg1;
- (void)setUserIsRemote:(bool)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserType:(unsigned long long)arg1;
- (void)setValuesByRestriction:(id)arg1;
- (void)setVisibleRestrictions:(id)arg1;
- (bool)shouldAllowEditing;
- (bool)shouldEnableRestriction:(id)arg1;
- (id)userDSID;
- (bool)userIsManaged;
- (bool)userIsRemote;
- (id)userName;
- (unsigned long long)userType;
- (id)valuesByRestriction;
- (id)visibleRestrictionWithConfiguration:(id)arg1 key:(id)arg2;
- (id)visibleRestrictions;

@end
