
@protocol _INPBAppNames <NSObject>

@required

- (NSString *)appName;
- (NSString *)axSpokenName;
- (NSString *)displayName;
- (bool)hasAppName;
- (bool)hasAxSpokenName;
- (bool)hasDisplayName;
- (bool)hasSpotlightName;
- (void)setAppName:(NSString *)arg1;
- (void)setAxSpokenName:(NSString *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setSpotlightName:(NSString *)arg1;
- (NSString *)spotlightName;

@end
