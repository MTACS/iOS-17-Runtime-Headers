
@interface DNDPerModeSettingsMO : NSManagedObject

@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) DNDFocusModeMO *mode;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
