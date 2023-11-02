
@interface HUAccessorySettingsProfileItem : HFItem {
    MCProfile * _profile;
    HMSetting * _setting;
}

@property (nonatomic, readonly) MCProfile *profile;
@property (nonatomic, readonly) HMSetting *setting;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithProfile:(id)arg1 setting:(id)arg2;
- (id)profile;
- (id)setting;
- (id)uniqueIdentifier;

@end
