
@interface FASettingsPresetsRequest : FAFamilyCircleRequest {
    NSString * _altDSID;
    NSNumber * _childAge;
}

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (void).cxx_destruct;
- (id)fetchCachedPresets;
- (void)fetchCachedPresetsWithCompletion:(id /* block */)arg1;
- (id)fetchPresets;
- (void)fetchPresetsWithCompletion:(id /* block */)arg1;
- (id)initWithChildAge:(id)arg1;
- (id)initWithFamilyMember:(id)arg1;
- (id)initWithFamilyMemberAltDSID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI

- (void)st_fetchCachedPresetsWithCompletion:(id /* block */)arg1;

@end
