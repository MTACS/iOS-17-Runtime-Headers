
@interface DOCTagLocalStorage : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSOrderedSet *discoveredTags;
@property (nonatomic) long long tagSerialNumber;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSOrderedSet *userTags;

+ (id)sharedAppGroupStorage;

- (void).cxx_destruct;
- (id)_unarchivedTagsFromData:(id)arg1;
- (id)discoveredTags;
- (id)init;
- (void)setDiscoveredTags:(id)arg1;
- (void)setTagSerialNumber:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserTags:(id)arg1;
- (long long)tagSerialNumber;
- (id)userDefaults;
- (id)userTags;

@end
