
@interface DNDAppConfigurationPredicateMO : DNDPerAppSettingsMO

@property (nonatomic, copy) NSString *predicateFormat;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
