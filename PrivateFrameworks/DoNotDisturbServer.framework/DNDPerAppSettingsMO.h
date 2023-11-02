
@interface DNDPerAppSettingsMO : DNDPerModeSettingsMO

@property (nonatomic, retain) DNDApplicationMO *application;

+ (id)fetchRequest;

@end
