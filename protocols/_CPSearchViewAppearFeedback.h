
@protocol _CPSearchViewAppearFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isOnLockScreen;
- (bool)isOverApp;
- (bool)isUsingLoweredSearchBar;
- (NSData *)jsonData;
- (NSString *)originatingApp;
- (NSString *)preexistingInput;
- (bool)readerTextAvailable;
- (void)setIsOnLockScreen:(bool)arg1;
- (void)setIsOverApp:(bool)arg1;
- (void)setIsUsingLoweredSearchBar:(bool)arg1;
- (void)setOriginatingApp:(NSString *)arg1;
- (void)setPreexistingInput:(NSString *)arg1;
- (void)setReaderTextAvailable:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewAppearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewAppearEvent;

@end
