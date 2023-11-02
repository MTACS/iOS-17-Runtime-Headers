
@interface HMDAnalyticsMultiUserSettings : HMFObject {
    bool  _isOwner;
    NSArray * _multiUserSettingsValuesByKeyPaths;
}

@property bool isOwner;
@property (copy) NSArray *multiUserSettingsValuesByKeyPaths;

- (void).cxx_destruct;
- (bool)isOwner;
- (id)multiUserSettingsValuesByKeyPaths;
- (void)setIsOwner:(bool)arg1;
- (void)setMultiUserSettingsValuesByKeyPaths:(id)arg1;

@end
