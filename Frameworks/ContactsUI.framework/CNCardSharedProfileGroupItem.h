
@interface CNCardSharedProfileGroupItem : CNPropertyGroupItem {
    CNSharedProfileStateOracle * _sharedProfileStateOracle;
}

@property (nonatomic, retain) CNSharedProfileStateOracle *sharedProfileStateOracle;

- (void).cxx_destruct;
- (id)contactDisplayName;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (void)setSharedProfileStateOracle:(id)arg1;
- (long long)sharedPhotoDisplayPreference;
- (long long)sharedPhotoDisplayPreferenceForValue:(id)arg1;
- (id)sharedProfileStateOracle;

@end
