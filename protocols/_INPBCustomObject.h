
@protocol _INPBCustomObject <NSObject>

@required

+ (Class)alternativeType;

- (void)addAlternative:(_INPBDataString *)arg1;
- (_INPBDataString *)alternativeAtIndex:(unsigned long long)arg1;
- (NSArray *)alternatives;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (_INPBImageValue *)displayImage;
- (NSString *)displayString;
- (bool)hasDisplayImage;
- (bool)hasDisplayString;
- (bool)hasIdentifier;
- (bool)hasPronunciationHint;
- (bool)hasSubtitleString;
- (NSString *)identifier;
- (NSString *)pronunciationHint;
- (void)setAlternatives:(NSArray *)arg1;
- (void)setDisplayImage:(_INPBImageValue *)arg1;
- (void)setDisplayString:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setPronunciationHint:(NSString *)arg1;
- (void)setSubtitleString:(NSString *)arg1;
- (NSString *)subtitleString;

@end
