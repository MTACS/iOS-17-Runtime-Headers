
@interface HFAccessorySettingProfilesFormatter : NSFormatter {
    unsigned long long  _numberOfProfiles;
}

@property (nonatomic) unsigned long long numberOfProfiles;

- (unsigned long long)numberOfProfiles;
- (void)setNumberOfProfiles:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
