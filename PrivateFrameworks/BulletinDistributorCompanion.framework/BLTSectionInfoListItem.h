
@interface BLTSectionInfoListItem : NSObject {
    NSString * _overriddenDisplayName;
    NSString * _overriddenFactorySectionID;
    BBSectionIcon * _overriddenIcon;
    NSDictionary * _overrides;
    NSString * _phoneSectionID;
    NSString * _universalSectionID;
}

@property (copy) NSString *overriddenDisplayName;
@property (copy) NSString *overriddenFactorySectionID;
@property (copy) BBSectionIcon *overriddenIcon;
@property (retain) NSDictionary *overrides;
@property (copy) NSString *phoneSectionID;
@property (copy) NSString *universalSectionID;

- (void).cxx_destruct;
- (id)overriddenDisplayName;
- (id)overriddenFactorySectionID;
- (id)overriddenIcon;
- (id)overrides;
- (id)phoneSectionID;
- (void)setOverriddenDisplayName:(id)arg1;
- (void)setOverriddenFactorySectionID:(id)arg1;
- (void)setOverriddenIcon:(id)arg1;
- (void)setOverrides:(id)arg1;
- (void)setPhoneSectionID:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)universalSectionID;

@end
