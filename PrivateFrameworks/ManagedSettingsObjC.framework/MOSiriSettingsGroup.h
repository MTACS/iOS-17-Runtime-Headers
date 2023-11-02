
@interface MOSiriSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *denySiri;

+ (id)denySiriMetadata;
+ (id)groupName;

- (id)denySiri;
- (void)setDenySiri:(id)arg1;

@end
