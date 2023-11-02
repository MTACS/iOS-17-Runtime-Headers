
@interface FCGoalProgressStore : NSObject {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_legacyDefaultsDomain;
- (id)_userDefaultsDomain;
- (id)currentConfiguration;
- (id)initWithProfile:(id)arg1;
- (id)lastFiredEventDateForIdentifier:(id)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)storeFiredEventDate:(id)arg1 identifier:(id)arg2;

@end
