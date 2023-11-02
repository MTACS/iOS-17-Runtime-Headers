
@interface BCSUserDefaults : NSUserDefaults <BCSUserDefaultsProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDefaults;

@end
