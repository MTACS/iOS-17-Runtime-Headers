
@interface DNDAppConfigurationActionMO : DNDPerAppSettingsMO

@property (nonatomic, retain) NSData *encodedAction;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
