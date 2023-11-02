
@interface DNDSystemActionMO : DNDPerModeSettingsMO

@property (nonatomic, retain) NSData *encodedAction;
@property (nonatomic, retain) NSData *encodedReverseAction;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
