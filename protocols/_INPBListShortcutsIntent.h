
@protocol _INPBListShortcutsIntent <NSObject>

@required

+ (Class)appTitleType;

- (int)StringAsOriginDevice:(NSString *)arg1;
- (void)addAppTitle:(_INPBAppIdentifier *)arg1;
- (_INPBAppIdentifier *)appTitleAtIndex:(unsigned long long)arg1;
- (NSArray *)appTitles;
- (unsigned long long)appTitlesCount;
- (void)clearAppTitles;
- (bool)hasIntentMetadata;
- (bool)hasOriginDevice;
- (_INPBIntentMetadata *)intentMetadata;
- (int)originDevice;
- (NSString *)originDeviceAsString:(int)arg1;
- (void)setAppTitles:(NSArray *)arg1;
- (void)setHasOriginDevice:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setOriginDevice:(int)arg1;

@end
