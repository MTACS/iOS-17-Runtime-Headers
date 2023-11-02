
@protocol _SFPBPunchout <NSObject>

@required

- (NSString *)actionTarget;
- (void)addUrls:(_SFPBURL *)arg1;
- (NSString *)bundleIdentifier;
- (void)clearUrls;
- (bool)hasClip;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isRunnableInBackground;
- (NSData *)jsonData;
- (NSString *)label;
- (NSString *)name;
- (void)setActionTarget:(NSString *)arg1;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setHasClip:(bool)arg1;
- (void)setIsRunnableInBackground:(bool)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setUrls:(NSArray *)arg1;
- (void)setUserActivityData:(_SFPBUserActivityData *)arg1;
- (NSArray *)urls;
- (_SFPBURL *)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (_SFPBUserActivityData *)userActivityData;

@end
